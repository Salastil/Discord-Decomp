package com.google.android.material.datepicker;

import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.core.view.e0;
import androidx.core.view.s0;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.R;
import java.util.WeakHashMap;

/* loaded from: classes3.dex */
public final class s extends RecyclerView.ViewHolder {

    /* renamed from: d, reason: collision with root package name */
    public final TextView f6061d;

    /* renamed from: e, reason: collision with root package name */
    public final MaterialCalendarGridView f6062e;

    public s(LinearLayout linearLayout, boolean z5) {
        super(linearLayout);
        TextView textView = (TextView) linearLayout.findViewById(R.id.month_title);
        this.f6061d = textView;
        WeakHashMap weakHashMap = s0.a;
        new e0(R.id.tag_accessibility_heading, Boolean.class, 0, 28, 3).f(textView, Boolean.TRUE);
        this.f6062e = (MaterialCalendarGridView) linearLayout.findViewById(R.id.month_grid);
        if (z5) {
            return;
        }
        textView.setVisibility(8);
    }
}
