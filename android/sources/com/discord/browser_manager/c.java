package com.discord.browser_manager;

import java.util.function.BiConsumer;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements BiConsumer {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Function2 f3797b;

    public /* synthetic */ c(int i5, Function2 function2) {
        this.a = i5;
        this.f3797b = function2;
    }

    @Override // java.util.function.BiConsumer
    public final void accept(Object obj, Object obj2) {
        switch (this.a) {
            case 0:
                ((b) this.f3797b).invoke(obj, obj2);
                break;
            default:
                ((com.discord.chat.input.views.a) this.f3797b).invoke(obj, obj2);
                break;
        }
    }
}
