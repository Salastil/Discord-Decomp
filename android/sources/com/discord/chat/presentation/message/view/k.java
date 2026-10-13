package com.discord.chat.presentation.message.view;

import android.view.View;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final /* synthetic */ class k implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4000d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function2 f4001e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f4002i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ String f4003v;

    public /* synthetic */ k(int i5, String str, String str2, Function2 function2) {
        this.f4000d = i5;
        this.f4001e = function2;
        this.f4002i = str;
        this.f4003v = str2;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f4000d) {
            case 0:
                this.f4001e.invoke(this.f4002i, this.f4003v);
                break;
            case 1:
                this.f4001e.invoke(this.f4002i, this.f4003v);
                break;
            default:
                this.f4001e.invoke(this.f4002i, this.f4003v);
                break;
        }
    }
}
