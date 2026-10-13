package com.discord.chat.presentation.message.view.polls;

import com.discord.chat.presentation.message.messagepart.PollMessageAccessory;
import com.discord.chat.presentation.message.view.botuikit.components.TextDisplayComponentView;
import com.discord.chat.presentation.message.view.botuikit.react.TextDisplayComponentViewManager;
import com.discord.chat.reactevents.ViewResizeMode;
import kotlin.Unit;
import kotlin.jvm.functions.Function6;
import kotlin.jvm.functions.Function8;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function6 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4019d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4020e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4021i;

    public /* synthetic */ a(int i5, Object obj, Object obj2) {
        this.f4019d = i5;
        this.f4020e = obj;
        this.f4021i = obj2;
    }

    @Override // kotlin.jvm.functions.Function6
    public final Object invoke(Object obj, Object obj2, Object obj3, Object obj4, Object obj5, Object obj6) {
        Unit bind$lambda$4;
        Unit createTextDisplayComponentContext$lambda$8;
        switch (this.f4019d) {
            case 0:
                bind$lambda$4 = BasePollWithRecyclerView.bind$lambda$4((Function8) this.f4020e, (PollMessageAccessory) this.f4021i, (String) obj, ((Integer) obj2).intValue(), ((Integer) obj3).intValue(), ((Integer) obj4).intValue(), ((Integer) obj5).intValue(), (ViewResizeMode) obj6);
                return bind$lambda$4;
            default:
                createTextDisplayComponentContext$lambda$8 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$8((TextDisplayComponentViewManager) this.f4020e, (TextDisplayComponentView) this.f4021i, (String) obj, (String) obj2, (String) obj3, (String) obj4, (String) obj5, (String) obj6);
                return createTextDisplayComponentContext$lambda$8;
        }
    }
}
