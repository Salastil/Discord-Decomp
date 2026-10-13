package v2;

import a5.h0;
import androidx.collection.SparseArrayCompat;
import androidx.fragment.app.f1;
import androidx.lifecycle.z0;
import ve.d;

/* loaded from: classes.dex */
public class b extends z0 {

    /* renamed from: d, reason: collision with root package name */
    public static final f1 f19176d = new f1(1);

    /* renamed from: b, reason: collision with root package name */
    public final SparseArrayCompat f19177b = new SparseArrayCompat(0);

    /* renamed from: c, reason: collision with root package name */
    public boolean f19178c = false;

    @Override // androidx.lifecycle.z0
    public final void b() {
        SparseArrayCompat sparseArrayCompat = this.f19177b;
        int g6 = sparseArrayCompat.g();
        for (int i5 = 0; i5 < g6; i5++) {
            a aVar = (a) sparseArrayCompat.h(i5);
            d dVar = aVar.f19173l;
            dVar.a();
            dVar.f19394c = true;
            h0 h0Var = aVar.f19175n;
            if (h0Var != null) {
                aVar.g(h0Var);
            }
            a aVar2 = dVar.a;
            if (aVar2 == null) {
                throw new IllegalStateException("No listener register");
            }
            if (aVar2 != aVar) {
                throw new IllegalArgumentException("Attempting to unregister the wrong listener");
            }
            dVar.a = null;
            if (h0Var != null) {
                boolean z5 = h0Var.f175e;
            }
            dVar.f19395d = true;
            dVar.f19393b = false;
            dVar.f19394c = false;
            dVar.f19396e = false;
        }
        int i6 = sparseArrayCompat.f1212v;
        Object[] objArr = sparseArrayCompat.f1211i;
        for (int i10 = 0; i10 < i6; i10++) {
            objArr[i10] = null;
        }
        sparseArrayCompat.f1212v = 0;
        sparseArrayCompat.f1209d = false;
    }
}
