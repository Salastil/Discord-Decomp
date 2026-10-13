package com.discord.chat.presentation.message.view;

import android.view.View;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class w implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4067d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function1 f4068e;

    public /* synthetic */ w(Function1 function1, int i5) {
        this.f4067d = i5;
        this.f4068e = function1;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f4067d) {
            case 0:
                this.f4068e.invoke(null);
                break;
            default:
                this.f4068e.invoke(null);
                break;
        }
    }
}
