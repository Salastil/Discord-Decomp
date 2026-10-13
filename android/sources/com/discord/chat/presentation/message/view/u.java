package com.discord.chat.presentation.message.view;

import android.view.View;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class u implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4045d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function1 f4046e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f4047i;

    public /* synthetic */ u(int i5, String str, Function1 function1) {
        this.f4045d = i5;
        this.f4046e = function1;
        this.f4047i = str;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit truncate_l3ndG_o$lambda$4;
        Unit appendEditedLabel$lambda$5;
        switch (this.f4045d) {
            case 0:
                truncate_l3ndG_o$lambda$4 = MessageContentView.truncate_l3ndG_o$lambda$4(this.f4046e, this.f4047i, (View) obj);
                return truncate_l3ndG_o$lambda$4;
            default:
                appendEditedLabel$lambda$5 = MessageContentView.appendEditedLabel$lambda$5(this.f4046e, this.f4047i, (View) obj);
                return appendEditedLabel$lambda$5;
        }
    }
}
