package com.discord.chat.presentation.message;

import com.discord.chat.presentation.message.viewholder.MessagePartViewHolder;
import com.discord.reactions.ReactionView;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class g implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3922d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ MessageAccessoriesAdapter f3923e;

    public /* synthetic */ g(MessageAccessoriesAdapter messageAccessoriesAdapter, int i5) {
        this.f3922d = i5;
        this.f3923e = messageAccessoriesAdapter;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit onBindViewHolder$lambda$27;
        Unit onBindViewHolder$lambda$28;
        Unit onBindViewHolder$lambda$10;
        Unit onBindViewHolder$lambda$11;
        Unit onCreateViewHolder$lambda$2;
        Unit onTapSpoiler$lambda$1;
        Unit onBindViewHolder$lambda$19;
        Unit onBindViewHolder$lambda$20;
        switch (this.f3922d) {
            case 0:
                onBindViewHolder$lambda$27 = MessageAccessoriesAdapter.onBindViewHolder$lambda$27(this.f3923e, (ReactionView.Reaction) obj);
                return onBindViewHolder$lambda$27;
            case 1:
                onBindViewHolder$lambda$28 = MessageAccessoriesAdapter.onBindViewHolder$lambda$28(this.f3923e, (ReactionView.Reaction) obj);
                return onBindViewHolder$lambda$28;
            case 2:
                onBindViewHolder$lambda$10 = MessageAccessoriesAdapter.onBindViewHolder$lambda$10(this.f3923e, (String) obj);
                return onBindViewHolder$lambda$10;
            case 3:
                onBindViewHolder$lambda$11 = MessageAccessoriesAdapter.onBindViewHolder$lambda$11(this.f3923e, (String) obj);
                return onBindViewHolder$lambda$11;
            case 4:
                onCreateViewHolder$lambda$2 = MessageAccessoriesAdapter.onCreateViewHolder$lambda$2(this.f3923e, (MessagePartViewHolder) obj);
                return onCreateViewHolder$lambda$2;
            case 5:
                onTapSpoiler$lambda$1 = MessageAccessoriesAdapter.onTapSpoiler$lambda$1(this.f3923e, (MessagePartViewHolder) obj);
                return onTapSpoiler$lambda$1;
            case 6:
                onBindViewHolder$lambda$19 = MessageAccessoriesAdapter.onBindViewHolder$lambda$19(this.f3923e, (ReactionView.Reaction) obj);
                return onBindViewHolder$lambda$19;
            default:
                onBindViewHolder$lambda$20 = MessageAccessoriesAdapter.onBindViewHolder$lambda$20(this.f3923e, (ReactionView.Reaction) obj);
                return onBindViewHolder$lambda$20;
        }
    }
}
