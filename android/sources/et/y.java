package et;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.logging.Logger;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import okio.Buffer;
import okio.ByteString;
import okio.Sink;
import okio.Source;
import okio.Timeout;

/* loaded from: classes.dex */
public abstract class y {
    public static final e a = new e();

    public static final boolean a(int i5, int i6, int i10, byte[] a10, byte[] b10) {
        Intrinsics.checkNotNullParameter(a10, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        for (int i11 = 0; i11 < i10; i11++) {
            if (a10[i11 + i5] != b10[i11 + i6]) {
                return false;
            }
        }
        return true;
    }

    public static okio.a b() {
        okio.a aVar = okio.a.j;
        Intrinsics.checkNotNull(aVar);
        okio.a aVar2 = aVar.f16125f;
        if (aVar2 == null) {
            long nanoTime = System.nanoTime();
            okio.a.class.wait(okio.a.f16122h);
            okio.a aVar3 = okio.a.j;
            Intrinsics.checkNotNull(aVar3);
            if (aVar3.f16125f != null || System.nanoTime() - nanoTime < okio.a.f16123i) {
                return null;
            }
            return okio.a.j;
        }
        long nanoTime2 = aVar2.f16126g - System.nanoTime();
        if (nanoTime2 > 0) {
            long j = nanoTime2 / 1000000;
            okio.a.class.wait(j, (int) (nanoTime2 - (1000000 * j)));
            return null;
        }
        okio.a aVar4 = okio.a.j;
        Intrinsics.checkNotNull(aVar4);
        aVar4.f16125f = aVar2.f16125f;
        aVar2.f16125f = null;
        return aVar2;
    }

    public static final q c(Sink sink) {
        Intrinsics.checkNotNullParameter(sink, "<this>");
        return new q(sink);
    }

    public static final r d(Source source) {
        Intrinsics.checkNotNullParameter(source, "<this>");
        return new r(source);
    }

    public static void e(long j, Buffer buffer, int i5, ArrayList arrayList, int i6, int i10, ArrayList arrayList2) {
        int i11;
        int i12;
        ArrayList arrayList3;
        long j5;
        int i13;
        int i14 = i5;
        ArrayList arrayList4 = arrayList;
        ArrayList arrayList5 = arrayList2;
        if (i6 >= i10) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        for (int i15 = i6; i15 < i10; i15++) {
            if (((ByteString) arrayList4.get(i15)).c() < i14) {
                throw new IllegalArgumentException("Failed requirement.");
            }
        }
        ByteString byteString = (ByteString) arrayList.get(i6);
        ByteString byteString2 = (ByteString) arrayList4.get(i10 - 1);
        if (i14 == byteString.c()) {
            int intValue = ((Number) arrayList5.get(i6)).intValue();
            int i16 = i6 + 1;
            ByteString byteString3 = (ByteString) arrayList4.get(i16);
            i11 = i16;
            i12 = intValue;
            byteString = byteString3;
        } else {
            i11 = i6;
            i12 = -1;
        }
        if (byteString.f(i14) == byteString2.f(i14)) {
            int min = Math.min(byteString.c(), byteString2.c());
            int i17 = 0;
            for (int i18 = i14; i18 < min && byteString.f(i18) == byteString2.f(i18); i18++) {
                i17++;
            }
            long j7 = 4;
            long j10 = (buffer.f16114e / j7) + j + 2 + i17 + 1;
            buffer.b0(-i17);
            buffer.b0(i12);
            int i19 = i14 + i17;
            while (i14 < i19) {
                buffer.b0(byteString.f(i14) & 255);
                i14++;
            }
            if (i11 + 1 == i10) {
                if (i19 != ((ByteString) arrayList4.get(i11)).c()) {
                    throw new IllegalStateException("Check failed.");
                }
                buffer.b0(((Number) arrayList5.get(i11)).intValue());
                return;
            } else {
                Buffer buffer2 = new Buffer();
                buffer.b0(((int) ((buffer2.f16114e / j7) + j10)) * (-1));
                e(j10, buffer2, i19, arrayList4, i11, i10, arrayList5);
                buffer.J(buffer2);
                return;
            }
        }
        int i20 = 1;
        for (int i21 = i11 + 1; i21 < i10; i21++) {
            if (((ByteString) arrayList4.get(i21 - 1)).f(i14) != ((ByteString) arrayList4.get(i21)).f(i14)) {
                i20++;
            }
        }
        long j11 = 4;
        long j12 = (buffer.f16114e / j11) + j + 2 + (i20 * 2);
        buffer.b0(i20);
        buffer.b0(i12);
        for (int i22 = i11; i22 < i10; i22++) {
            int f2 = ((ByteString) arrayList4.get(i22)).f(i14);
            if (i22 == i11 || f2 != ((ByteString) arrayList4.get(i22 - 1)).f(i14)) {
                buffer.b0(f2 & 255);
            }
        }
        Buffer buffer3 = new Buffer();
        int i23 = i11;
        while (i23 < i10) {
            byte f10 = ((ByteString) arrayList4.get(i23)).f(i14);
            int i24 = i23 + 1;
            int i25 = i24;
            while (true) {
                if (i25 >= i10) {
                    i25 = i10;
                    break;
                } else if (f10 != ((ByteString) arrayList4.get(i25)).f(i14)) {
                    break;
                } else {
                    i25++;
                }
            }
            if (i24 == i25 && i14 + 1 == ((ByteString) arrayList4.get(i23)).c()) {
                buffer.b0(((Number) arrayList5.get(i23)).intValue());
                arrayList3 = arrayList5;
                j5 = j12;
                i13 = i25;
            } else {
                buffer.b0(((int) ((buffer3.f16114e / j11) + j12)) * (-1));
                arrayList3 = arrayList5;
                j5 = j12;
                i13 = i25;
                e(j5, buffer3, i14 + 1, arrayList, i23, i13, arrayList3);
                arrayList4 = arrayList;
            }
            j12 = j5;
            i23 = i13;
            arrayList5 = arrayList3;
        }
        buffer.J(buffer3);
    }

    public static final void f(long j, long j5, long j7) {
        if ((j5 | j7) < 0 || j5 > j || j - j5 < j7) {
            StringBuilder n6 = k0.d.n(j, "size=", " offset=");
            n6.append(j5);
            n6.append(" byteCount=");
            n6.append(j7);
            throw new ArrayIndexOutOfBoundsException(n6.toString());
        }
    }

    public static final boolean g(AssertionError assertionError) {
        Logger logger = n.a;
        Intrinsics.checkNotNullParameter(assertionError, "<this>");
        if (assertionError.getCause() != null) {
            String message = assertionError.getMessage();
            if (message != null ? StringsKt.D(message, "getsockname failed", false) : false) {
                return true;
            }
        }
        return false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:68:0x012d, code lost:
    
        continue;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static o h(ByteString... byteStrings) {
        int i5;
        Intrinsics.checkNotNullParameter(byteStrings, "byteStrings");
        int i6 = 0;
        if (byteStrings.length == 0) {
            return new o(new ByteString[0], new int[]{0, -1});
        }
        ArrayList I = kotlin.collections.x.I(byteStrings);
        Intrinsics.checkNotNullParameter(I, "<this>");
        if (I.size() > 1) {
            Collections.sort(I);
        }
        ArrayList arrayList = new ArrayList(byteStrings.length);
        for (ByteString byteString : byteStrings) {
            arrayList.add(-1);
        }
        Object[] array = arrayList.toArray(new Integer[0]);
        if (array == null) {
            throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
        }
        Integer[] numArr = (Integer[]) array;
        ArrayList i10 = c0.i(Arrays.copyOf(numArr, numArr.length));
        int length = byteStrings.length;
        int i11 = 0;
        int i12 = 0;
        while (i11 < length) {
            ByteString byteString2 = byteStrings[i11];
            int i13 = i12 + 1;
            int size = I.size();
            Intrinsics.checkNotNullParameter(I, "<this>");
            int size2 = I.size();
            if (size < 0) {
                throw new IllegalArgumentException(s4.h.e(size, "fromIndex (0) is greater than toIndex (", ")."));
            }
            if (size > size2) {
                throw new IndexOutOfBoundsException(s4.h.d(size, "toIndex (", size2, ") is greater than size (", ")."));
            }
            int i14 = size - 1;
            int i15 = 0;
            while (true) {
                if (i15 > i14) {
                    i5 = -(i15 + 1);
                    break;
                }
                i5 = (i15 + i14) >>> 1;
                int a10 = ho.a.a((Comparable) I.get(i5), byteString2);
                if (a10 < 0) {
                    i15 = i5 + 1;
                } else if (a10 > 0) {
                    i14 = i5 - 1;
                }
            }
            i10.set(i5, Integer.valueOf(i12));
            i11++;
            i12 = i13;
        }
        if (((ByteString) I.get(0)).c() <= 0) {
            throw new IllegalArgumentException("the empty byte string is not a supported option");
        }
        int i16 = 0;
        while (i16 < I.size()) {
            ByteString prefix = (ByteString) I.get(i16);
            int i17 = i16 + 1;
            int i18 = i17;
            while (i18 < I.size()) {
                ByteString byteString3 = (ByteString) I.get(i18);
                byteString3.getClass();
                Intrinsics.checkNotNullParameter(prefix, "prefix");
                if (byteString3.h(prefix, prefix.c())) {
                    if (byteString3.c() == prefix.c()) {
                        throw new IllegalArgumentException(("duplicate option: " + byteString3).toString());
                    }
                    if (((Number) i10.get(i18)).intValue() > ((Number) i10.get(i16)).intValue()) {
                        I.remove(i18);
                        i10.remove(i18);
                    } else {
                        i18++;
                    }
                }
            }
            i16 = i17;
        }
        Buffer buffer = new Buffer();
        e(0L, buffer, 0, I, 0, I.size(), i10);
        int[] iArr = new int[(int) (buffer.f16114e / 4)];
        while (!buffer.l()) {
            iArr[i6] = buffer.readInt();
            i6++;
        }
        Object[] copyOf = Arrays.copyOf(byteStrings, byteStrings.length);
        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(this, size)");
        return new o((ByteString[]) copyOf, iArr);
    }

    public static final b i(OutputStream outputStream) {
        Logger logger = n.a;
        Intrinsics.checkNotNullParameter(outputStream, "<this>");
        return new b(outputStream, new Timeout());
    }

    public static final b j(Socket socket) {
        Logger logger = n.a;
        Intrinsics.checkNotNullParameter(socket, "<this>");
        v vVar = new v(socket);
        OutputStream outputStream = socket.getOutputStream();
        Intrinsics.checkNotNullExpressionValue(outputStream, "getOutputStream()");
        b sink = new b(outputStream, vVar);
        Intrinsics.checkNotNullParameter(sink, "sink");
        return new b(vVar, sink);
    }

    public static b k(File file) {
        Logger logger = n.a;
        Intrinsics.checkNotNullParameter(file, "<this>");
        return i(new FileOutputStream(file, false));
    }

    public static final c l(File file) {
        Logger logger = n.a;
        Intrinsics.checkNotNullParameter(file, "<this>");
        return new c(new FileInputStream(file), Timeout.f16119d);
    }

    public static final c m(InputStream inputStream) {
        Logger logger = n.a;
        Intrinsics.checkNotNullParameter(inputStream, "<this>");
        return new c(inputStream, new Timeout());
    }

    public static final c n(Socket socket) {
        Logger logger = n.a;
        Intrinsics.checkNotNullParameter(socket, "<this>");
        v vVar = new v(socket);
        InputStream inputStream = socket.getInputStream();
        Intrinsics.checkNotNullExpressionValue(inputStream, "getInputStream()");
        c source = new c(inputStream, vVar);
        Intrinsics.checkNotNullParameter(source, "source");
        return new c(vVar, source);
    }
}
