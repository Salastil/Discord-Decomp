package androidx.recyclerview.widget;

import java.util.ArrayList;
import java.util.Arrays;

/* loaded from: classes.dex */
public final class d {
    public Object a;

    /* renamed from: b, reason: collision with root package name */
    public Object f2384b;

    public void a() {
        int[] iArr = (int[]) this.a;
        if (iArr != null) {
            Arrays.fill(iArr, -1);
        }
        this.f2384b = null;
    }

    public void b(int i5) {
        int[] iArr = (int[]) this.a;
        if (iArr == null) {
            int[] iArr2 = new int[Math.max(i5, 10) + 1];
            this.a = iArr2;
            Arrays.fill(iArr2, -1);
        } else if (i5 >= iArr.length) {
            int length = iArr.length;
            while (length <= i5) {
                length *= 2;
            }
            int[] iArr3 = new int[length];
            this.a = iArr3;
            System.arraycopy(iArr, 0, iArr3, 0, iArr.length);
            int[] iArr4 = (int[]) this.a;
            Arrays.fill(iArr4, iArr.length, iArr4.length, -1);
        }
    }

    public void c(int i5, int i6) {
        int[] iArr = (int[]) this.a;
        if (iArr == null || i5 >= iArr.length) {
            return;
        }
        int i10 = i5 + i6;
        b(i10);
        int[] iArr2 = (int[]) this.a;
        System.arraycopy(iArr2, i5, iArr2, i10, (iArr2.length - i5) - i6);
        Arrays.fill((int[]) this.a, i5, i10, -1);
        ArrayList arrayList = (ArrayList) this.f2384b;
        if (arrayList == null) {
            return;
        }
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            r1 r1Var = (r1) ((ArrayList) this.f2384b).get(size);
            int i11 = r1Var.f2449d;
            if (i11 >= i5) {
                r1Var.f2449d = i11 + i6;
            }
        }
    }

    public void d(int i5, int i6) {
        int[] iArr = (int[]) this.a;
        if (iArr == null || i5 >= iArr.length) {
            return;
        }
        int i10 = i5 + i6;
        b(i10);
        int[] iArr2 = (int[]) this.a;
        System.arraycopy(iArr2, i10, iArr2, i5, (iArr2.length - i5) - i6);
        int[] iArr3 = (int[]) this.a;
        Arrays.fill(iArr3, iArr3.length - i6, iArr3.length, -1);
        ArrayList arrayList = (ArrayList) this.f2384b;
        if (arrayList == null) {
            return;
        }
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            r1 r1Var = (r1) ((ArrayList) this.f2384b).get(size);
            int i11 = r1Var.f2449d;
            if (i11 >= i5) {
                if (i11 < i10) {
                    ((ArrayList) this.f2384b).remove(size);
                } else {
                    r1Var.f2449d = i11 - i6;
                }
            }
        }
    }
}
