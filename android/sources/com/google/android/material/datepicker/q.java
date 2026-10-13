package com.google.android.material.datepicker;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.TextView;
import com.discord.R;
import java.util.Calendar;

/* loaded from: classes3.dex */
public final class q extends BaseAdapter {

    /* renamed from: v, reason: collision with root package name */
    public static final int f6054v = y.c(null).getMaximum(4);

    /* renamed from: w, reason: collision with root package name */
    public static final int f6055w = (y.c(null).getMaximum(7) + y.c(null).getMaximum(5)) - 1;

    /* renamed from: d, reason: collision with root package name */
    public final p f6056d;

    /* renamed from: e, reason: collision with root package name */
    public c f6057e;

    /* renamed from: i, reason: collision with root package name */
    public final b f6058i;

    public q(p pVar, b bVar) {
        this.f6056d = pVar;
        this.f6058i = bVar;
        throw null;
    }

    public final int a() {
        int i5 = this.f6058i.f6012w;
        p pVar = this.f6056d;
        Calendar calendar = pVar.f6047d;
        int i6 = calendar.get(7);
        if (i5 <= 0) {
            i5 = calendar.getFirstDayOfWeek();
        }
        int i10 = i6 - i5;
        return i10 < 0 ? i10 + pVar.f6050v : i10;
    }

    @Override // android.widget.Adapter
    /* renamed from: b, reason: merged with bridge method [inline-methods] */
    public final Long getItem(int i5) {
        if (i5 < a() || i5 > c()) {
            return null;
        }
        int a = (i5 - a()) + 1;
        Calendar a10 = y.a(this.f6056d.f6047d);
        a10.set(5, a);
        return Long.valueOf(a10.getTimeInMillis());
    }

    public final int c() {
        return (a() + this.f6056d.f6051w) - 1;
    }

    @Override // android.widget.Adapter
    public final int getCount() {
        return f6055w;
    }

    @Override // android.widget.Adapter
    public final long getItemId(int i5) {
        return i5 / this.f6056d.f6050v;
    }

    @Override // android.widget.Adapter
    public final View getView(int i5, View view, ViewGroup viewGroup) {
        Context context = viewGroup.getContext();
        if (this.f6057e == null) {
            this.f6057e = new c(context);
        }
        TextView textView = (TextView) view;
        if (view == null) {
            textView = (TextView) LayoutInflater.from(viewGroup.getContext()).inflate(R.layout.mtrl_calendar_day, viewGroup, false);
        }
        int a = i5 - a();
        if (a >= 0) {
            p pVar = this.f6056d;
            if (a < pVar.f6051w) {
                textView.setTag(pVar);
                textView.setText(String.format(textView.getResources().getConfiguration().locale, "%d", Integer.valueOf(a + 1)));
                textView.setVisibility(0);
                textView.setEnabled(true);
                if (getItem(i5) == null || textView == null) {
                    return textView;
                }
                textView.getContext();
                y.b().getTimeInMillis();
                throw null;
            }
        }
        textView.setVisibility(8);
        textView.setEnabled(false);
        if (getItem(i5) == null) {
            textView.getContext();
            y.b().getTimeInMillis();
            throw null;
        }
        return textView;
    }

    @Override // android.widget.BaseAdapter, android.widget.Adapter
    public final boolean hasStableIds() {
        return true;
    }
}
