package com.google.android.material.datepicker;

import android.view.View;
import androidx.recyclerview.widget.LinearLayoutManager;
import java.util.Calendar;

/* loaded from: classes3.dex */
public final class f implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6021d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ t f6022e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ l f6023i;

    public /* synthetic */ f(l lVar, t tVar, int i5) {
        this.f6021d = i5;
        this.f6023i = lVar;
        this.f6022e = tVar;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f6021d) {
            case 0:
                l lVar = this.f6023i;
                int findLastVisibleItemPosition = ((LinearLayoutManager) lVar.E.getLayoutManager()).findLastVisibleItemPosition() - 1;
                Calendar a = y.a(this.f6022e.a.f6008d.f6047d);
                a.add(2, findLastVisibleItemPosition);
                lVar.t(new p(a));
                break;
            default:
                l lVar2 = this.f6023i;
                int findFirstVisibleItemPosition = ((LinearLayoutManager) lVar2.E.getLayoutManager()).findFirstVisibleItemPosition() + 1;
                Calendar a10 = y.a(this.f6022e.a.f6008d.f6047d);
                a10.add(2, findFirstVisibleItemPosition);
                lVar2.t(new p(a10));
                break;
        }
    }
}
