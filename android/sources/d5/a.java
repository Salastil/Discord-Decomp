package d5;

import androidx.recyclerview.widget.RecyclerView;
import bg.s;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Collections;

/* loaded from: classes.dex */
public final class a {

    /* renamed from: e, reason: collision with root package name */
    public static final s f7415e = new s(2);
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f7416b;

    /* renamed from: c, reason: collision with root package name */
    public final int f7417c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f7418d;

    public a(int i5, ArrayList arrayList, int i6, InputStream inputStream) {
        this.a = i5;
        this.f7416b = arrayList;
        this.f7417c = i6;
        this.f7418d = inputStream;
    }

    public synchronized byte[] a(int i5) {
        for (int i6 = 0; i6 < ((ArrayList) this.f7418d).size(); i6++) {
            byte[] bArr = (byte[]) ((ArrayList) this.f7418d).get(i6);
            if (bArr.length >= i5) {
                this.a -= bArr.length;
                ((ArrayList) this.f7418d).remove(i6);
                this.f7416b.remove(bArr);
                return bArr;
            }
        }
        return new byte[i5];
    }

    public synchronized void b(byte[] bArr) {
        if (bArr != null) {
            if (bArr.length <= this.f7417c) {
                this.f7416b.add(bArr);
                int binarySearch = Collections.binarySearch((ArrayList) this.f7418d, bArr, f7415e);
                if (binarySearch < 0) {
                    binarySearch = (-binarySearch) - 1;
                }
                ((ArrayList) this.f7418d).add(binarySearch, bArr);
                this.a += bArr.length;
                synchronized (this) {
                    while (this.a > this.f7417c) {
                        byte[] bArr2 = (byte[]) this.f7416b.remove(0);
                        ((ArrayList) this.f7418d).remove(bArr2);
                        this.a -= bArr2.length;
                    }
                }
            }
        }
    }

    public a() {
        this.f7416b = new ArrayList();
        this.f7418d = new ArrayList(64);
        this.a = 0;
        this.f7417c = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
    }
}
