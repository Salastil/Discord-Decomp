package io.sentry;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.ByteArrayOutputStream;
import java.io.InputStream;
import java.io.StringReader;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class z implements p0 {

    /* renamed from: b, reason: collision with root package name */
    public static final Charset f12092b = Charset.forName("UTF-8");
    public final c1 a;

    public z(c1 c1Var) {
        this.a = c1Var;
    }

    /* JADX WARN: Code restructure failed: missing block: B:52:0x00aa, code lost:
    
        r13 = new io.sentry.internal.debugmeta.c(r2, r4);
     */
    /* JADX WARN: Code restructure failed: missing block: B:53:0x00af, code lost:
    
        r3.close();
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x00b2, code lost:
    
        return r13;
     */
    @Override // io.sentry.p0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final io.sentry.internal.debugmeta.c a(InputStream inputStream) {
        c1 c1Var = this.a;
        Charset charset = f12092b;
        byte[] bArr = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET];
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        int i5 = 0;
        int i6 = -1;
        while (true) {
            try {
                int read = inputStream.read(bArr);
                if (read <= 0) {
                    break;
                }
                int i10 = 0;
                while (true) {
                    if (i6 == -1 && i10 < read) {
                        if (bArr[i10] == 10) {
                            i6 = i5 + i10;
                            break;
                        }
                        i10++;
                    }
                }
                byteArrayOutputStream.write(bArr, 0, read);
                i5 += read;
            } catch (Throwable th2) {
                try {
                    byteArrayOutputStream.close();
                } catch (Throwable th3) {
                    th2.addSuppressed(th3);
                }
                throw th2;
            }
        }
        byte[] byteArray = byteArrayOutputStream.toByteArray();
        if (byteArray.length == 0) {
            throw new IllegalArgumentException("Empty stream.");
        }
        if (i6 == -1) {
            throw new IllegalArgumentException("Envelope contains no header.");
        }
        StringReader stringReader = new StringReader(new String(byteArray, 0, i6, charset));
        try {
            k4 k4Var = (k4) c1Var.c(stringReader, k4.class);
            stringReader.close();
            if (k4Var == null) {
                throw new IllegalArgumentException("Envelope header is null.");
            }
            int i11 = i6 + 1;
            ArrayList arrayList = new ArrayList();
            while (true) {
                int i12 = i11;
                while (true) {
                    if (i12 >= byteArray.length) {
                        i12 = -1;
                        break;
                    }
                    if (byteArray[i12] == 10) {
                        break;
                    }
                    i12++;
                }
                if (i12 == -1) {
                    throw new IllegalArgumentException("Invalid envelope. Item at index '" + arrayList.size() + "'. has no header delimiter.");
                }
                stringReader = new StringReader(new String(byteArray, i11, i12 - i11, charset));
                try {
                    p4 p4Var = (p4) c1Var.c(stringReader, p4.class);
                    stringReader.close();
                    if (p4Var == null || p4Var.a() <= 0) {
                        break;
                    }
                    int a = p4Var.a() + i12;
                    int i13 = a + 1;
                    if (i13 > byteArray.length) {
                        throw new IllegalArgumentException("Invalid length for item at index '" + arrayList.size() + "'. Item is '" + i13 + "' bytes. There are '" + byteArray.length + "' in the buffer.");
                    }
                    arrayList.add(new o4(p4Var, Arrays.copyOfRange(byteArray, i12 + 1, i13)));
                    if (i13 == byteArray.length) {
                        break;
                    }
                    i11 = a + 2;
                    if (i11 == byteArray.length) {
                        if (byteArray[i13] != 10) {
                            throw new IllegalArgumentException("Envelope has invalid data following an item.");
                        }
                    }
                } finally {
                }
            }
            throw new IllegalArgumentException("Item header at index '" + arrayList.size() + "' is null or empty.");
        } finally {
        }
    }
}
