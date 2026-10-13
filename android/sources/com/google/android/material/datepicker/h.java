package com.google.android.material.datepicker;

import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes3.dex */
public final class h extends w {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6024d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ l f6025e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h(l lVar, int i5, int i6) {
        super(i5, false);
        this.f6025e = lVar;
        this.f6024d = i6;
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager
    public final void calculateExtraLayoutSpace(RecyclerView.State state, int[] iArr) {
        int i5 = this.f6024d;
        l lVar = this.f6025e;
        if (i5 == 0) {
            iArr[0] = lVar.E.getWidth();
            iArr[1] = lVar.E.getWidth();
        } else {
            iArr[0] = lVar.E.getHeight();
            iArr[1] = lVar.E.getHeight();
        }
    }
}
