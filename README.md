# pawn-uuid

[![sampctl](https://shields.southcla.ws/badge/sampctl-pawn--uuid-2f2f2f.svg?style=for-the-badge)](https://github.com/Southclaws/pawn-uuid)

uuid provides a simple UUID version 4 generator function.

What's a UUID? A UUID (Universal Unique Identifier) is a standardised
implementation of generating unique byte sequences. In string format, these
UUIDs look like this:

* `e338fae6-9df9-4e21-bb59-667c29e419cf`
* `0149476c-cf42-4432-b946-d9695656aec0`
* `dcd2d8bd-0fb8-44db-93fd-b00efaa610ae`

You'll probably see these style strings all over the place from newsletters to
website account IDs. They are very useful for uniquely identifying things
without falling back to user-defined names or incrementing IDs.

### What are these useful for?

Identifiers like this are perfect for identifying players without relying on
their username - this allows players to freely change their username without
changing a ton of database relations.

It's also perfect for identifying entities such as vehicles, pickups, items,
etc. A good example of this is the Scavenge and Survive gamemode: on each server
restart, around 10-20,000 items are generated and placed in the world, each of
these items is assigned a unique identifier so if a player picks one up and
keeps it in their inventory or in a vehicle trunk, the unique identifier
persists throughout the item's lifetime and everywhere it goes can be tracked.
This is very useful for auditing and anti-cheat.

### Why not use an incrementing ID?

If you're an SQL user you probably use `AUTOINCREMENT` to assign unique
identifiers to entities you persist in the database.

The problem with this is you're relying on the database implementation to handle
the uniqueness. This locks you into using that database and also means there's a
reliance on sequentiality in the identifiers.

### Why not use a random integer?

Sure there are 2^32 valid states you can use in a Pawn cell (integer), what's
the chance of a collision? That's not actually a whole lot of entropy,
especially if you're creating new entities on every server restart/multiple
times a day. It's best to be safe when trying to generate unique identifiers.

## Installation

[Source and Binaries on GitHub](https://github.com/Southclaws/pawn-uuid)

Simply install to your project:

```bash
sampctl package install Southclaws/pawn-uuid
```

Include in your code and begin using the library:

```pawn
#include <uuid>
```

And add to your runtime configuration:

```json
{
  "plugins": ["Southclaws/pawn-uuid"]
}
```

## Usage

There's only one function and one constant, the following example should be
enough documentation for usage:

```pawn
new uuid[UUID_LEN];
UUID(uuid, UUID_LEN);
printf("UUID: '%s'", uuid);
// prints a nice unique string shaped like: 00000000-0000-0000-0000-000000000000
```

## Testing

Run unit tests with:

### Windows

```powershell
make test-windows
```

### Linux

Requires Docker to be installed and available at the command line. If you're
actually on a Linux machine, just run the Windows makefile command above and
it'll still run fine on Linux!

```bash
make test-debian
```
