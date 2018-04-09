# pawn-uuid

uuid provides a simple UUID version 4 generator function.

## Installation

Simply install to your project:

```bash
sampctl package install Southclaws/pawn-uuid
```

Include in your code and begin using the library:

```pawn
#include <uuid>
```

## Usage

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

```bash
make test-debian
```
