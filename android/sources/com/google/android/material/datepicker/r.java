package com.google.android.material.datepicker;

import android.view.View;
import android.widget.AdapterView;

/* loaded from: classes3.dex */
public final class r implements AdapterView.OnItemClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ MaterialCalendarGridView f6059d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ t f6060e;

    public r(t tVar, MaterialCalendarGridView materialCalendarGridView) {
        this.f6060e = tVar;
        this.f6059d = materialCalendarGridView;
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public final void onItemClick(AdapterView adapterView, View view, int i5, long j) {
        MaterialCalendarGridView materialCalendarGridView = this.f6059d;
        q a = materialCalendarGridView.a();
        if (i5 < a.a() || i5 > a.c()) {
            return;
        }
        if (materialCalendarGridView.a().getItem(i5).longValue() >= this.f6060e.f6063b.a.f6028i.f6010i.f6016d) {
            throw null;
        }
    }
}
