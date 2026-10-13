package com.google.android.material.datepicker;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.R;
import java.util.Locale;

/* loaded from: classes3.dex */
public final class a0 extends RecyclerView.Adapter {
    public final l a;

    public a0(l lVar) {
        this.a = lVar;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public final int getItemCount() {
        return this.a.f6028i.f6013x;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public final void onBindViewHolder(RecyclerView.ViewHolder viewHolder, int i5) {
        z zVar = (z) viewHolder;
        l lVar = this.a;
        int i6 = lVar.f6028i.f6008d.f6049i + i5;
        zVar.f6066d.setText(String.format(Locale.getDefault(), "%d", Integer.valueOf(i6)));
        TextView textView = zVar.f6066d;
        Context context = textView.getContext();
        textView.setContentDescription(y.b().get(1) == i6 ? String.format(context.getString(R.string.mtrl_picker_navigate_to_current_year_description), Integer.valueOf(i6)) : String.format(context.getString(R.string.mtrl_picker_navigate_to_year_description), Integer.valueOf(i6)));
        c cVar = lVar.f6031x;
        if (y.b().get(1) == i6) {
            r8.c cVar2 = cVar.f6015b;
        } else {
            r8.c cVar3 = cVar.a;
        }
        throw null;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public final RecyclerView.ViewHolder onCreateViewHolder(ViewGroup viewGroup, int i5) {
        return new z((TextView) LayoutInflater.from(viewGroup.getContext()).inflate(R.layout.mtrl_calendar_year, viewGroup, false));
    }
}
