package com.google.android.material.datepicker;

import android.view.ContextThemeWrapper;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.R;
import java.util.Calendar;

/* loaded from: classes3.dex */
public final class t extends RecyclerView.Adapter {
    public final b a;

    /* renamed from: b, reason: collision with root package name */
    public final i f6063b;

    /* renamed from: c, reason: collision with root package name */
    public final int f6064c;

    public t(ContextThemeWrapper contextThemeWrapper, b bVar, i iVar) {
        p pVar = bVar.f6008d;
        p pVar2 = bVar.f6009e;
        p pVar3 = bVar.f6011v;
        if (pVar.f6047d.compareTo(pVar3.f6047d) > 0) {
            throw new IllegalArgumentException("firstPage cannot be after currentPage");
        }
        if (pVar3.f6047d.compareTo(pVar2.f6047d) > 0) {
            throw new IllegalArgumentException("currentPage cannot be after lastPage");
        }
        this.f6064c = (contextThemeWrapper.getResources().getDimensionPixelSize(R.dimen.mtrl_calendar_day_height) * q.f6054v) + (n.w(contextThemeWrapper, android.R.attr.windowFullscreen) ? contextThemeWrapper.getResources().getDimensionPixelSize(R.dimen.mtrl_calendar_day_height) : 0);
        this.a = bVar;
        this.f6063b = iVar;
        setHasStableIds(true);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public final int getItemCount() {
        return this.a.f6014y;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public final long getItemId(int i5) {
        Calendar a = y.a(this.a.f6008d.f6047d);
        a.add(2, i5);
        a.set(5, 1);
        Calendar a10 = y.a(a);
        a10.get(2);
        a10.get(1);
        a10.getMaximum(7);
        a10.getActualMaximum(5);
        a10.getTimeInMillis();
        return a10.getTimeInMillis();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public final void onBindViewHolder(RecyclerView.ViewHolder viewHolder, int i5) {
        s sVar = (s) viewHolder;
        b bVar = this.a;
        Calendar a = y.a(bVar.f6008d.f6047d);
        a.add(2, i5);
        p pVar = new p(a);
        sVar.f6061d.setText(pVar.i());
        MaterialCalendarGridView materialCalendarGridView = (MaterialCalendarGridView) sVar.f6062e.findViewById(R.id.month_grid);
        if (materialCalendarGridView.a() == null || !pVar.equals(materialCalendarGridView.a().f6056d)) {
            new q(pVar, bVar);
            throw null;
        }
        materialCalendarGridView.invalidate();
        materialCalendarGridView.a().getClass();
        throw null;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public final RecyclerView.ViewHolder onCreateViewHolder(ViewGroup viewGroup, int i5) {
        LinearLayout linearLayout = (LinearLayout) LayoutInflater.from(viewGroup.getContext()).inflate(R.layout.mtrl_calendar_month_labeled, viewGroup, false);
        if (!n.w(viewGroup.getContext(), android.R.attr.windowFullscreen)) {
            return new s(linearLayout, false);
        }
        linearLayout.setLayoutParams(new RecyclerView.LayoutParams(-1, this.f6064c));
        return new s(linearLayout, true);
    }
}
