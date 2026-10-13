package com.facebook.soloader;

import android.os.Build;
import android.util.Log;
import java.io.FileInputStream;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.channels.ClosedByInterruptException;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* loaded from: classes3.dex */
public abstract class r {
    public static a0 a(String str, UnsatisfiedLinkError unsatisfiedLinkError) {
        a0 a0Var;
        if (unsatisfiedLinkError.getMessage() == null || !unsatisfiedLinkError.getMessage().contains("ELF")) {
            Matcher matcher = Pattern.compile("\\P{ASCII}+").matcher(str);
            if (matcher.find()) {
                Log.w("SoLoader", "Library name is corrupted, contains non-ASCII characters " + matcher.group());
                b("Corrupted lib name detected");
                a0Var = new y(str, "corrupted lib name: " + unsatisfiedLinkError.toString());
            } else {
                a0Var = new a0(str, unsatisfiedLinkError.toString());
            }
        } else {
            b("Corrupted lib file detected");
            a0Var = new y(str, unsatisfiedLinkError.toString());
        }
        a0Var.initCause(unsatisfiedLinkError);
        return a0Var;
    }

    public static void b(String str) {
        if (f("SoLoader", 3)) {
            Log.d("SoLoader", str);
        }
    }

    public static String[] c(g gVar) {
        if (!(gVar instanceof h)) {
            return d(gVar);
        }
        h hVar = (h) gVar;
        int i5 = 0;
        while (true) {
            try {
                return d(hVar);
            } catch (ClosedByInterruptException e9) {
                i5++;
                if (i5 > 4) {
                    throw e9;
                }
                Thread.interrupted();
                Log.e("MinElf", "retrying extract_DT_NEEDED due to ClosedByInterruptException", e9);
                FileInputStream fileInputStream = new FileInputStream(hVar.f5101d);
                hVar.f5102e = fileInputStream;
                hVar.f5103i = fileInputStream.getChannel();
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:125:0x0138  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x0135  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0242 A[LOOP:1: B:43:0x00f4->B:54:0x0242, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0140 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String[] d(g gVar) {
        long j;
        long j5;
        int i5;
        long j7;
        long j10;
        String str;
        long j11;
        int i6;
        long j12;
        long j13;
        long j14;
        long j15;
        long j16;
        long j17;
        long j18;
        ByteBuffer allocate = ByteBuffer.allocate(8);
        allocate.order(ByteOrder.LITTLE_ENDIAN);
        long e9 = e(gVar, allocate, 0L);
        if (e9 != 1179403647) {
            throw new s("file is not ELF: magic is 0x" + Long.toHexString(e9) + ", it should be " + Long.toHexString(1179403647L));
        }
        g(gVar, allocate, 1, 4L);
        boolean z5 = ((short) (allocate.get() & 255)) == 1;
        g(gVar, allocate, 1, 5L);
        if (((short) (allocate.get() & 255)) == 2) {
            allocate.order(ByteOrder.BIG_ENDIAN);
        }
        if (z5) {
            j = e(gVar, allocate, 28L);
        } else {
            g(gVar, allocate, 8, 32L);
            j = allocate.getLong();
        }
        if (z5) {
            g(gVar, allocate, 2, 44L);
            j5 = 44;
            i5 = allocate.getShort() & 65535;
        } else {
            j5 = 44;
            g(gVar, allocate, 2, 56L);
            i5 = allocate.getShort() & 65535;
        }
        long j19 = i5;
        g(gVar, allocate, 2, z5 ? 42L : 54L);
        int i10 = allocate.getShort() & 65535;
        long j20 = 40;
        if (j19 == 65535) {
            if (z5) {
                j18 = e(gVar, allocate, 32L);
            } else {
                g(gVar, allocate, 8, 40L);
                j18 = allocate.getLong();
            }
            j19 = z5 ? e(gVar, allocate, j18 + 28) : e(gVar, allocate, j18 + j5);
        }
        long j21 = 0;
        long j22 = j;
        while (true) {
            if (j21 >= j19) {
                j7 = 0;
                break;
            }
            if ((z5 ? e(gVar, allocate, j22) : e(gVar, allocate, j22)) != 2) {
                j22 += i10;
                j21++;
                z5 = z5;
            } else if (z5) {
                j7 = e(gVar, allocate, j22 + 4);
            } else {
                g(gVar, allocate, 8, j22 + 8);
                j7 = allocate.getLong();
            }
        }
        boolean z6 = z5;
        if (j7 == 0) {
            throw new s("ELF file does not contain dynamic linking information");
        }
        long j23 = j7;
        long j24 = 0;
        int i11 = 0;
        while (true) {
            if (z6) {
                j10 = e(gVar, allocate, j23);
            } else {
                g(gVar, allocate, 8, j23);
                j10 = allocate.getLong();
            }
            long j25 = j20;
            if (j10 == 1) {
                if (i11 == Integer.MAX_VALUE) {
                    throw new s("malformed DT_NEEDED section");
                }
                i11++;
            } else if (j10 == 5) {
                str = "malformed DT_NEEDED section";
                if (z6) {
                    j11 = e(gVar, allocate, j23 + 4);
                } else {
                    g(gVar, allocate, 8, j23 + 8);
                    j11 = allocate.getLong();
                }
                j24 = j11;
                j23 += !z6 ? 8L : 16L;
                if (j10 != 0) {
                    if (j24 == 0) {
                        throw new s("Dynamic section string-table not found");
                    }
                    long j26 = j;
                    int i12 = 0;
                    while (true) {
                        int i13 = i10;
                        if (i12 >= j19) {
                            i6 = i11;
                            j12 = 0;
                            break;
                        }
                        if ((z6 ? e(gVar, allocate, j26) : e(gVar, allocate, j26)) == 1) {
                            if (z6) {
                                j15 = e(gVar, allocate, j26 + 8);
                            } else {
                                g(gVar, allocate, 8, j26 + 16);
                                j15 = allocate.getLong();
                            }
                            if (z6) {
                                i6 = i11;
                                j16 = e(gVar, allocate, j26 + 20);
                            } else {
                                i6 = i11;
                                g(gVar, allocate, 8, j26 + j25);
                                j16 = allocate.getLong();
                            }
                            if (j15 <= j24 && j24 < j16 + j15) {
                                if (z6) {
                                    j17 = e(gVar, allocate, j26 + 4);
                                } else {
                                    g(gVar, allocate, 8, j26 + 8);
                                    j17 = allocate.getLong();
                                }
                                j12 = (j24 - j15) + j17;
                            }
                        } else {
                            i6 = i11;
                        }
                        i10 = i13;
                        j26 += i10;
                        i12++;
                        i11 = i6;
                    }
                    if (j12 == 0) {
                        throw new s("did not find file offset of DT_STRTAB table");
                    }
                    int i14 = i6;
                    String[] strArr = new String[i14];
                    int i15 = 0;
                    do {
                        if (z6) {
                            j13 = e(gVar, allocate, j7);
                        } else {
                            g(gVar, allocate, 8, j7);
                            j13 = allocate.getLong();
                        }
                        if (j13 == 1) {
                            if (z6) {
                                j14 = e(gVar, allocate, j7 + 4);
                            } else {
                                g(gVar, allocate, 8, j7 + 8);
                                j14 = allocate.getLong();
                            }
                            long j27 = j12 + j14;
                            StringBuilder sb2 = new StringBuilder();
                            while (true) {
                                long j28 = j27 + 1;
                                g(gVar, allocate, 1, j27);
                                short s2 = (short) (allocate.get() & 255);
                                if (s2 == 0) {
                                    break;
                                }
                                sb2.append((char) s2);
                                j27 = j28;
                            }
                            strArr[i15] = sb2.toString();
                            if (i15 == Integer.MAX_VALUE) {
                                throw new s(str);
                            }
                            i15++;
                        }
                        j7 += z6 ? 8L : 16L;
                    } while (j13 != 0);
                    if (i15 == i14) {
                        return strArr;
                    }
                    throw new s(str);
                }
                j20 = j25;
            }
            str = "malformed DT_NEEDED section";
            j23 += !z6 ? 8L : 16L;
            if (j10 != 0) {
            }
        }
    }

    public static long e(g gVar, ByteBuffer byteBuffer, long j) {
        g(gVar, byteBuffer, 4, j);
        return byteBuffer.getInt() & 4294967295L;
    }

    public static boolean f(String str, int i5) {
        return (Build.VERSION.SDK_INT > 25 || str.length() <= 23) ? Log.isLoggable(str, i5) : Log.isLoggable(str.substring(0, 23), i5);
    }

    public static void g(g gVar, ByteBuffer byteBuffer, int i5, long j) {
        int k;
        byteBuffer.position(0);
        byteBuffer.limit(i5);
        while (byteBuffer.remaining() > 0 && (k = gVar.k(j, byteBuffer)) != -1) {
            j += k;
        }
        if (byteBuffer.remaining() > 0) {
            throw new s("ELF file truncated");
        }
        byteBuffer.position(0);
    }

    public static void h(String str, String str2) {
        if (f(str, 2)) {
            Log.v(str, str2);
        }
    }
}
