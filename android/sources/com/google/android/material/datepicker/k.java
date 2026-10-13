package com.google.android.material.datepicker;

import android.icu.text.DateFormat;
import android.icu.text.DisplayContext;
import android.icu.util.TimeZone;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import com.google.android.material.button.MaterialButton;
import java.util.Calendar;
import java.util.Date;
import java.util.Locale;
import java.util.concurrent.atomic.AtomicReference;

/* loaded from: classes3.dex */
public final class k extends RecyclerView.OnScrollListener {
    public final /* synthetic */ t a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ l f6026b;

    public k(l lVar, t tVar) {
        this.f6026b = lVar;
        this.a = tVar;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.OnScrollListener
    public final void onScrolled(RecyclerView recyclerView, int i5, int i6) {
        b bVar = this.a.a;
        l lVar = this.f6026b;
        int findFirstVisibleItemPosition = i5 < 0 ? ((LinearLayoutManager) lVar.E.getLayoutManager()).findFirstVisibleItemPosition() : ((LinearLayoutManager) lVar.E.getLayoutManager()).findLastVisibleItemPosition();
        Calendar a = y.a(bVar.f6008d.f6047d);
        a.add(2, findFirstVisibleItemPosition);
        p pVar = new p(a);
        lVar.f6029v = pVar;
        MaterialButton materialButton = lVar.J;
        Calendar a10 = y.a(bVar.f6008d.f6047d);
        a10.add(2, findFirstVisibleItemPosition);
        a10.set(5, 1);
        Calendar a11 = y.a(a10);
        a11.get(2);
        a11.get(1);
        a11.getMaximum(7);
        a11.getActualMaximum(5);
        a11.getTimeInMillis();
        long timeInMillis = a11.getTimeInMillis();
        Locale locale = Locale.getDefault();
        AtomicReference atomicReference = y.a;
        DateFormat instanceForSkeleton = DateFormat.getInstanceForSkeleton("yMMMM", locale);
        instanceForSkeleton.setTimeZone(TimeZone.getTimeZone("UTC"));
        instanceForSkeleton.setContext(DisplayContext.CAPITALIZATION_FOR_STANDALONE);
        materialButton.setText(instanceForSkeleton.format(new Date(timeInMillis)));
        lVar.v(bVar.f6008d.v(pVar));
    }
}
