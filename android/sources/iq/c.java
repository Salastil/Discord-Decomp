package iq;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class c extends OutputStream {

    /* renamed from: x, reason: collision with root package name */
    public static final byte[] f12190x = new byte[0];

    /* renamed from: i, reason: collision with root package name */
    public int f12193i;

    /* renamed from: w, reason: collision with root package name */
    public int f12195w;

    /* renamed from: d, reason: collision with root package name */
    public final int f12191d = IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f12192e = new ArrayList();

    /* renamed from: v, reason: collision with root package name */
    public byte[] f12194v = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT];

    public final void c(int i5) {
        this.f12192e.add(new t(this.f12194v));
        int length = this.f12193i + this.f12194v.length;
        this.f12193i = length;
        this.f12194v = new byte[Math.max(this.f12191d, Math.max(i5, length >>> 1))];
        this.f12195w = 0;
    }

    public final void f() {
        int i5 = this.f12195w;
        byte[] bArr = this.f12194v;
        int length = bArr.length;
        ArrayList arrayList = this.f12192e;
        if (i5 >= length) {
            arrayList.add(new t(this.f12194v));
            this.f12194v = f12190x;
        } else if (i5 > 0) {
            byte[] bArr2 = new byte[i5];
            System.arraycopy(bArr, 0, bArr2, 0, Math.min(bArr.length, i5));
            arrayList.add(new t(bArr2));
        }
        this.f12193i += this.f12195w;
        this.f12195w = 0;
    }

    public final synchronized d g() {
        ArrayList arrayList;
        f();
        arrayList = this.f12192e;
        if (arrayList == null) {
            ArrayList arrayList2 = new ArrayList();
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                arrayList2.add((d) it.next());
            }
            arrayList = arrayList2;
        }
        return arrayList.isEmpty() ? d.f12197d : d.a(arrayList.iterator(), arrayList.size());
    }

    public final String toString() {
        int i5;
        String hexString = Integer.toHexString(System.identityHashCode(this));
        synchronized (this) {
            i5 = this.f12193i + this.f12195w;
        }
        return String.format("<ByteString.Output@%s size=%d>", hexString, Integer.valueOf(i5));
    }

    @Override // java.io.OutputStream
    public final synchronized void write(int i5) {
        try {
            if (this.f12195w == this.f12194v.length) {
                c(1);
            }
            byte[] bArr = this.f12194v;
            int i6 = this.f12195w;
            this.f12195w = i6 + 1;
            bArr[i6] = (byte) i5;
        } catch (Throwable th2) {
            throw th2;
        }
    }

    @Override // java.io.OutputStream
    public final synchronized void write(byte[] bArr, int i5, int i6) {
        try {
            byte[] bArr2 = this.f12194v;
            int length = bArr2.length;
            int i10 = this.f12195w;
            if (i6 <= length - i10) {
                System.arraycopy(bArr, i5, bArr2, i10, i6);
                this.f12195w += i6;
            } else {
                int length2 = bArr2.length - i10;
                System.arraycopy(bArr, i5, bArr2, i10, length2);
                int i11 = i6 - length2;
                c(i11);
                System.arraycopy(bArr, i5 + length2, this.f12194v, 0, i11);
                this.f12195w = i11;
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }
}
