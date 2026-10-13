package com.discord.chat.presentation.message.view;

import android.view.View;
import com.discord.chat.presentation.message.view.customthemes.SharedCustomThemeView;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class e implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3979d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function1 f3980e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f3981i;

    public /* synthetic */ e(int i5, String str, Function1 function1) {
        this.f3979d = i5;
        this.f3980e = function1;
        this.f3981i = str;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f3979d) {
            case 0:
                this.f3980e.invoke(this.f3981i);
                break;
            case 1:
                this.f3980e.invoke(this.f3981i);
                break;
            case 2:
                this.f3980e.invoke(this.f3981i);
                break;
            default:
                SharedCustomThemeView.bind_pPZZVto$lambda$2(this.f3980e, this.f3981i, view);
                break;
        }
    }
}
