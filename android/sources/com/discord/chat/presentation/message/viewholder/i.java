package com.discord.chat.presentation.message.viewholder;

import android.view.View;
import com.discord.chat.bridge.sticker.Sticker;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class i implements View.OnLongClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4102d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function1 f4103e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Sticker f4104i;

    public /* synthetic */ i(Function1 function1, Sticker sticker, int i5) {
        this.f4102d = i5;
        this.f4103e = function1;
        this.f4104i = sticker;
    }

    @Override // android.view.View.OnLongClickListener
    public final boolean onLongClick(View view) {
        boolean bind$lambda$1;
        boolean bind$lambda$12;
        boolean bind$lambda$13;
        boolean bind$lambda$14;
        switch (this.f4102d) {
            case 0:
                bind$lambda$1 = StickerApngViewHolder.bind$lambda$1(this.f4103e, this.f4104i, view);
                return bind$lambda$1;
            case 1:
                bind$lambda$12 = StickerGifViewHolder.bind$lambda$1(this.f4103e, this.f4104i, view);
                return bind$lambda$12;
            case 2:
                bind$lambda$13 = StickerLottieViewHolder.bind$lambda$1(this.f4103e, this.f4104i, view);
                return bind$lambda$13;
            default:
                bind$lambda$14 = StickerPngViewHolder.bind$lambda$1(this.f4103e, this.f4104i, view);
                return bind$lambda$14;
        }
    }
}
