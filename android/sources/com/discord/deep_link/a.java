package com.discord.deep_link;

import java.util.function.Function;
import kotlin.Unit;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function {
    @Override // java.util.function.Function
    public final Object apply(Object obj) {
        Unit onDeepLinking$lambda$1;
        onDeepLinking$lambda$1 = DeepLinks$init$2.onDeepLinking$lambda$1((Throwable) obj);
        return onDeepLinking$lambda$1;
    }
}
