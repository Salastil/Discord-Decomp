package br;

import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import s4.h;
import wd.e;

/* loaded from: classes3.dex */
public final class a implements e {

    /* renamed from: d, reason: collision with root package name */
    public final List f3155d;

    public a(List rawDetents, int i5) {
        switch (i5) {
            case 1:
                Intrinsics.checkNotNullParameter(rawDetents, "rawDetents");
                List i02 = CollectionsKt.i0(rawDetents);
                this.f3155d = i02;
                if (i02.isEmpty()) {
                    throw new IllegalArgumentException("[RNScreens] At least one detent must be provided.");
                }
                if (i02.size() > 3) {
                    throw new IllegalArgumentException(h.e(i02.size(), "[RNScreens] Maximum of 3 detents supported, got ", ".").toString());
                }
                if (a()) {
                    return;
                }
                Iterator it = i02.iterator();
                while (it.hasNext()) {
                    double doubleValue = ((Number) it.next()).doubleValue();
                    if (0.0d > doubleValue || doubleValue > 1.0d) {
                        throw new IllegalArgumentException(("[RNScreens] Detent values must be within 0.0 and 1.0, got " + doubleValue + ".").toString());
                    }
                }
                List list = this.f3155d;
                Intrinsics.checkNotNullParameter(list, "<this>");
                if (!Intrinsics.areEqual(list, CollectionsKt.d0(CollectionsKt.i0(CollectionsKt.k0(list))))) {
                    throw new IllegalArgumentException("[RNScreens] Detents must be sorted in strictly ascending order.");
                }
                return;
            case 2:
                this.f3155d = rawDetents;
                return;
            default:
                Intrinsics.checkNotNullParameter(rawDetents, "translators");
                this.f3155d = rawDetents;
                return;
        }
    }

    @Override // wd.e
    public int A() {
        return 1;
    }

    public boolean a() {
        List list = this.f3155d;
        return list.size() == 1 && ((Number) list.get(0)).doubleValue() == -1.0d;
    }

    public int b(int i5) {
        return (int) (((Number) this.f3155d.get(r0.size() - 1)).doubleValue() * i5);
    }

    @Override // wd.e
    public int d(long j) {
        return -1;
    }

    @Override // wd.e
    public long i(int i5) {
        return 0L;
    }

    @Override // wd.e
    public List q(long j) {
        return this.f3155d;
    }
}
