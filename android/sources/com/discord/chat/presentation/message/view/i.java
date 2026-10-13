package com.discord.chat.presentation.message.view;

import android.view.View;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class i implements View.OnLongClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3992d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function1 f3993e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f3994i;

    public /* synthetic */ i(int i5, String str, Function1 function1) {
        this.f3992d = i5;
        this.f3993e = function1;
        this.f3994i = str;
    }

    @Override // android.view.View.OnLongClickListener
    public final boolean onLongClick(View view) {
        boolean value$lambda$9$lambda$8$lambda$7;
        boolean name$lambda$5$lambda$4$lambda$3;
        boolean footer$lambda$38$lambda$37$lambda$36;
        boolean title$lambda$20$lambda$19$lambda$18;
        boolean description$lambda$28$lambda$27;
        switch (this.f3992d) {
            case 0:
                value$lambda$9$lambda$8$lambda$7 = EmbedFieldView.setValue$lambda$9$lambda$8$lambda$7(this.f3993e, this.f3994i, view);
                return value$lambda$9$lambda$8$lambda$7;
            case 1:
                name$lambda$5$lambda$4$lambda$3 = EmbedFieldView.setName$lambda$5$lambda$4$lambda$3(this.f3993e, this.f3994i, view);
                return name$lambda$5$lambda$4$lambda$3;
            case 2:
                footer$lambda$38$lambda$37$lambda$36 = EmbedView.setFooter$lambda$38$lambda$37$lambda$36(this.f3993e, this.f3994i, view);
                return footer$lambda$38$lambda$37$lambda$36;
            case 3:
                title$lambda$20$lambda$19$lambda$18 = EmbedView.setTitle$lambda$20$lambda$19$lambda$18(this.f3993e, this.f3994i, view);
                return title$lambda$20$lambda$19$lambda$18;
            default:
                description$lambda$28$lambda$27 = EmbedView.setDescription$lambda$28$lambda$27(this.f3993e, this.f3994i, view);
                return description$lambda$28$lambda$27;
        }
    }
}
