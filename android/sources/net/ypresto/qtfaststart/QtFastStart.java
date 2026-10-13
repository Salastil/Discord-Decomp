package net.ypresto.qtfaststart;

import java.io.File;
import java.io.FileDescriptor;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.channels.FileChannel;

/* loaded from: classes3.dex */
public class QtFastStart {
    private static final int ATOM_PREAMBLE_SIZE = 8;
    public static boolean sDEBUG = false;
    private static final int FREE_ATOM = fourCcToInt(new byte[]{102, 114, 101, 101});
    private static final int JUNK_ATOM = fourCcToInt(new byte[]{106, 117, 110, 107});
    private static final int MDAT_ATOM = fourCcToInt(new byte[]{109, 100, 97, 116});
    private static final int MOOV_ATOM = fourCcToInt(new byte[]{109, 111, 111, 118});
    private static final int PNOT_ATOM = fourCcToInt(new byte[]{112, 110, 111, 116});
    private static final int SKIP_ATOM = fourCcToInt(new byte[]{115, 107, 105, 112});
    private static final int WIDE_ATOM = fourCcToInt(new byte[]{119, 105, 100, 101});
    private static final int PICT_ATOM = fourCcToInt(new byte[]{80, 73, 67, 84});
    private static final int FTYP_ATOM = fourCcToInt(new byte[]{102, 116, 121, 112});
    private static final int UUID_ATOM = fourCcToInt(new byte[]{117, 117, 105, 100});
    private static final int CMOV_ATOM = fourCcToInt(new byte[]{99, 109, 111, 118});
    private static final int STCO_ATOM = fourCcToInt(new byte[]{115, 116, 99, 111});
    private static final int CO64_ATOM = fourCcToInt(new byte[]{99, 111, 54, 52});

    public static class MalformedFileException extends QtFastStartException {
        public /* synthetic */ MalformedFileException(String str, int i5) {
            this(str);
        }

        private MalformedFileException(String str) {
            super(str, 0);
        }
    }

    public static class QtFastStartException extends Exception {
        public /* synthetic */ QtFastStartException(String str, int i5) {
            this(str);
        }

        private QtFastStartException(String str) {
            super(str);
        }
    }

    public static class UnsupportedFileException extends QtFastStartException {
        public /* synthetic */ UnsupportedFileException(String str, int i5) {
            this(str);
        }

        private UnsupportedFileException(String str) {
            super(str, 0);
        }
    }

    public static boolean fastStart(File file, File file2) {
        return fastStartStream(new FileInputStream(file), file2);
    }

    /* JADX WARN: Removed duplicated region for block: B:102:0x00eb A[EDGE_INSN: B:102:0x00eb->B:30:0x00eb BREAK  A[LOOP:0: B:2:0x0016->B:103:?], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:103:? A[LOOP:0: B:2:0x0016->B:103:?, LOOP_END, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static boolean fastStartImpl(FileChannel fileChannel, FileChannel fileChannel2) {
        int i5;
        ByteBuffer order = ByteBuffer.allocate(8).order(ByteOrder.BIG_ENDIAN);
        int i6 = 0;
        long j = 0;
        ByteBuffer byteBuffer = null;
        int i10 = 0;
        long j5 = 0;
        while (true) {
            if (!readAndFill(fileChannel, order)) {
                break;
            }
            j = uint32ToLong(order.getInt());
            i10 = order.getInt();
            int i11 = FTYP_ATOM;
            if (i10 == i11) {
                int uint32ToInt = uint32ToInt(j);
                ByteBuffer order2 = ByteBuffer.allocate(uint32ToInt).order(ByteOrder.BIG_ENDIAN);
                order.rewind();
                order2.put(order);
                if (fileChannel.read(order2) < uint32ToInt - 8) {
                    byteBuffer = order2;
                    break;
                }
                order2.flip();
                j5 = fileChannel.position();
                byteBuffer = order2;
                printf("%c%c%c%c %10d %d", Integer.valueOf((i10 >> 24) & 255), Integer.valueOf((i10 >> 16) & 255), Integer.valueOf((i10 >> 8) & 255), Integer.valueOf(i10 & 255), Long.valueOf(fileChannel.position() - j), Long.valueOf(j));
                if (i10 == FREE_ATOM && i10 != JUNK_ATOM && i10 != MDAT_ATOM && i10 != MOOV_ATOM && i10 != PNOT_ATOM && i10 != SKIP_ATOM && i10 != WIDE_ATOM && i10 != PICT_ATOM && i10 != UUID_ATOM && i10 != i11) {
                    printf("encountered non-QT top-level atom (is this a QuickTime file?)", new Object[0]);
                    break;
                }
                if (j >= 8) {
                    break;
                }
            } else {
                if (j == 1) {
                    order.clear();
                    if (!readAndFill(fileChannel, order)) {
                        break;
                    }
                    j = uint64ToLong(order.getLong());
                    fileChannel.position((fileChannel.position() + j) - 16);
                } else {
                    fileChannel.position((fileChannel.position() + j) - 8);
                }
                printf("%c%c%c%c %10d %d", Integer.valueOf((i10 >> 24) & 255), Integer.valueOf((i10 >> 16) & 255), Integer.valueOf((i10 >> 8) & 255), Integer.valueOf(i10 & 255), Long.valueOf(fileChannel.position() - j), Long.valueOf(j));
                if (i10 == FREE_ATOM) {
                }
                if (j >= 8) {
                }
            }
        }
        if (i10 != MOOV_ATOM) {
            printf("last atom in file was not a moov atom, can't make streamable", new Object[0]);
            return false;
        }
        int uint32ToInt2 = uint32ToInt(j);
        long j7 = uint32ToInt2;
        long size = fileChannel.size() - j7;
        ByteBuffer order3 = ByteBuffer.allocate(uint32ToInt2).order(ByteOrder.BIG_ENDIAN);
        if (!readAndFill(fileChannel, order3, size)) {
            throw new MalformedFileException("failed to read moov atom", i6);
        }
        if (order3.getInt(12) == CMOV_ATOM) {
            throw new UnsupportedFileException("this utility does not support compressed moov atoms yet", i6);
        }
        for (int i12 = 8; order3.remaining() >= i12; i12 = 8) {
            int position = order3.position();
            int i13 = order3.getInt(position + 4);
            int i14 = STCO_ATOM;
            if (i13 == i14 || i13 == CO64_ATOM) {
                ByteBuffer byteBuffer2 = byteBuffer;
                if (uint32ToLong(order3.getInt(position)) > order3.remaining()) {
                    throw new MalformedFileException("bad atom size", 0);
                }
                order3.position(position + 12);
                if (order3.remaining() < 4) {
                    throw new MalformedFileException("malformed atom", 0);
                }
                int uint32ToInt3 = uint32ToInt(order3.getInt());
                String str = "bad atom size/element count";
                if (i13 == i14) {
                    printf("patching stco atom...", new Object[0]);
                    if (order3.remaining() < uint32ToInt3 * 4) {
                        throw new MalformedFileException(str, 0);
                    }
                    for (int i15 = 0; i15 < uint32ToInt3; i15++) {
                        int i16 = order3.getInt(order3.position());
                        int i17 = i16 + uint32ToInt2;
                        if (i16 < 0 && i17 >= 0) {
                            throw new UnsupportedFileException("This is bug in original qt-faststart.c: stco atom should be extended to co64 atom as new offset value overflows uint32, but is not implemented.", 0);
                        }
                        order3.putInt(i17);
                    }
                } else {
                    i5 = 0;
                    if (i13 == CO64_ATOM) {
                        printf("patching co64 atom...", new Object[0]);
                        if (order3.remaining() < uint32ToInt3 * 8) {
                            throw new MalformedFileException(str, 0);
                        }
                        for (int i18 = 0; i18 < uint32ToInt3; i18++) {
                            order3.putLong(order3.getLong(order3.position()) + j7);
                        }
                    }
                    i6 = i5;
                    byteBuffer = byteBuffer2;
                }
                i5 = 0;
                i6 = i5;
                byteBuffer = byteBuffer2;
            } else {
                order3.position(order3.position() + 1);
            }
        }
        int i19 = i6;
        ByteBuffer byteBuffer3 = byteBuffer;
        fileChannel.position(j5);
        if (byteBuffer3 != null) {
            printf("writing ftyp atom...", new Object[i19]);
            byteBuffer3.rewind();
            fileChannel2.write(byteBuffer3);
        }
        printf("writing moov atom...", new Object[i19]);
        order3.rewind();
        fileChannel2.write(order3);
        printf("copying rest of file...", new Object[i19]);
        fileChannel.transferTo(j5, size - j5, fileChannel2);
        return true;
    }

    private static boolean fastStartStream(FileInputStream fileInputStream, File file) {
        FileOutputStream fileOutputStream = null;
        try {
            FileChannel channel = fileInputStream.getChannel();
            FileOutputStream fileOutputStream2 = new FileOutputStream(file);
            try {
                boolean fastStartImpl = fastStartImpl(channel, fileOutputStream2.getChannel());
                fileInputStream.close();
                fileOutputStream2.close();
                return fastStartImpl;
            } catch (Throwable th2) {
                th = th2;
                fileOutputStream = fileOutputStream2;
                fileInputStream.close();
                if (fileOutputStream != null) {
                    fileOutputStream.close();
                }
                throw th;
            }
        } catch (Throwable th3) {
            th = th3;
        }
    }

    private static int fourCcToInt(byte[] bArr) {
        return ByteBuffer.wrap(bArr).order(ByteOrder.BIG_ENDIAN).getInt();
    }

    private static void printf(String str, Object... objArr) {
        if (sDEBUG) {
            System.err.println("QtFastStart: ".concat(String.format(str, objArr)));
        }
    }

    private static boolean readAndFill(FileChannel fileChannel, ByteBuffer byteBuffer) {
        byteBuffer.clear();
        int read = fileChannel.read(byteBuffer);
        byteBuffer.flip();
        return read == byteBuffer.capacity();
    }

    public static int uint32ToInt(int i5) {
        if (i5 >= 0) {
            return i5;
        }
        throw new UnsupportedFileException("uint32 value is too large", 0);
    }

    public static long uint32ToLong(int i5) {
        return i5 & 4294967295L;
    }

    public static long uint64ToLong(long j) {
        if (j >= 0) {
            return j;
        }
        throw new UnsupportedFileException("uint64 value is too large", 0);
    }

    public static boolean fastStart(FileDescriptor fileDescriptor, File file) {
        return fastStartStream(new FileInputStream(fileDescriptor), file);
    }

    public static int uint32ToInt(long j) {
        if (j > 2147483647L || j < 0) {
            throw new UnsupportedFileException("uint32 value is too large", 0);
        }
        return (int) j;
    }

    private static boolean readAndFill(FileChannel fileChannel, ByteBuffer byteBuffer, long j) {
        byteBuffer.clear();
        int read = fileChannel.read(byteBuffer, j);
        byteBuffer.flip();
        return read == byteBuffer.capacity();
    }
}
