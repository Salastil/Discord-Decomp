package com.google.android.material.datepicker;

import android.os.Build;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.TextView;
import com.discord.R;
import java.util.Calendar;
import java.util.Locale;

/* loaded from: classes3.dex */
public final class e extends BaseAdapter {

    /* renamed from: v, reason: collision with root package name */
    public static final int f6017v;

    /* renamed from: d, reason: collision with root package name */
    public final Calendar f6018d;

    /* renamed from: e, reason: collision with root package name */
    public final int f6019e;

    /* renamed from: i, reason: collision with root package name */
    public final int f6020i;

    static {
        f6017v = Build.VERSION.SDK_INT >= 26 ? 4 : 1;
    }

    public e() {
        Calendar c6 = y.c(null);
        this.f6018d = c6;
        this.f6019e = c6.getMaximum(7);
        this.f6020i = c6.getFirstDayOfWeek();
    }

    @Override // android.widget.Adapter
    public final int getCount() {
        return this.f6019e;
    }

    @Override // android.widget.Adapter
    public final Object getItem(int i5) {
        int i6 = this.f6019e;
        if (i5 >= i6) {
            return null;
        }
        int i10 = i5 + this.f6020i;
        if (i10 > i6) {
            i10 -= i6;
        }
        return Integer.valueOf(i10);
    }

    @Override // android.widget.Adapter
    public final long getItemId(int i5) {
        return 0L;
    }

    @Override // android.widget.Adapter
    public final View getView(int i5, View view, ViewGroup viewGroup) {
        TextView textView = (TextView) view;
        if (view == null) {
            textView = (TextView) LayoutInflater.from(viewGroup.getContext()).inflate(R.layout.mtrl_calendar_day_of_week, viewGroup, false);
        }
        int i6 = i5 + this.f6020i;
        int i10 = this.f6019e;
        if (i6 > i10) {
            i6 -= i10;
        }
        Calendar calendar = this.f6018d;
        calendar.set(7, i6);
        textView.setText(calendar.getDisplayName(7, f6017v, textView.getResources().getConfiguration().locale));
        textView.setContentDescription(String.format(viewGroup.getContext().getString(R.string.mtrl_picker_day_of_week_column_header), calendar.getDisplayName(7, 2, Locale.getDefault())));
        return textView;
    }

    public e(int i5) {
        Calendar c6 = y.c(null);
        this.f6018d = c6;
        this.f6019e = c6.getMaximum(7);
        this.f6020i = i5;
    }
}
