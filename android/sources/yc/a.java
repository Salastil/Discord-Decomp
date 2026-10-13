package yc;

import java.util.ArrayList;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class a extends mc.a {

    /* renamed from: i, reason: collision with root package name */
    public final long f20759i;

    /* renamed from: v, reason: collision with root package name */
    public final ArrayList f20760v;

    /* renamed from: w, reason: collision with root package name */
    public final ArrayList f20761w;

    public a(int i5, long j) {
        super(i5, 1);
        this.f20759i = j;
        this.f20760v = new ArrayList();
        this.f20761w = new ArrayList();
    }

    public final a f(int i5) {
        ArrayList arrayList = this.f20761w;
        int size = arrayList.size();
        for (int i6 = 0; i6 < size; i6++) {
            a aVar = (a) arrayList.get(i6);
            if (aVar.f14426e == i5) {
                return aVar;
            }
        }
        return null;
    }

    public final b g(int i5) {
        ArrayList arrayList = this.f20760v;
        int size = arrayList.size();
        for (int i6 = 0; i6 < size; i6++) {
            b bVar = (b) arrayList.get(i6);
            if (bVar.f14426e == i5) {
                return bVar;
            }
        }
        return null;
    }

    @Override // mc.a
    public final String toString() {
        return mc.a.b(this.f14426e) + " leaves: " + Arrays.toString(this.f20760v.toArray()) + " containers: " + Arrays.toString(this.f20761w.toArray());
    }
}
