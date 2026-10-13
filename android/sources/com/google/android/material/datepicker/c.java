package com.google.android.material.datepicker;

import a5.k0;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.Paint;
import com.discord.R;

/* loaded from: classes3.dex */
public final class c {
    public final r8.c a;

    /* renamed from: b, reason: collision with root package name */
    public final r8.c f6015b;

    public c(Context context) {
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(m3.n.L0(context, l.class.getCanonicalName(), R.attr.materialCalendarStyle).data, lg.a.f13970u);
        r8.c.q(context, obtainStyledAttributes.getResourceId(4, 0));
        r8.c.q(context, obtainStyledAttributes.getResourceId(2, 0));
        r8.c.q(context, obtainStyledAttributes.getResourceId(3, 0));
        r8.c.q(context, obtainStyledAttributes.getResourceId(5, 0));
        ColorStateList u5 = k0.u(context, obtainStyledAttributes, 7);
        this.a = r8.c.q(context, obtainStyledAttributes.getResourceId(9, 0));
        r8.c.q(context, obtainStyledAttributes.getResourceId(8, 0));
        this.f6015b = r8.c.q(context, obtainStyledAttributes.getResourceId(10, 0));
        new Paint().setColor(u5.getDefaultColor());
        obtainStyledAttributes.recycle();
    }
}
