package com.discord.chat.presentation.message.view;

import com.discord.react_strings.RenderContext;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class m implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4010d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f4011e;

    public /* synthetic */ m(int i5, int i6) {
        this.f4010d = i6;
        this.f4011e = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit configure_CgeVRR0$lambda$8$lambda$7;
        switch (this.f4010d) {
            case 0:
                configure_CgeVRR0$lambda$8$lambda$7 = ForumPostActionBarView.configure_CgeVRR0$lambda$8$lambda$7(this.f4011e, (RenderContext) obj);
                return configure_CgeVRR0$lambda$8$lambda$7;
            default:
                ((Integer) obj).intValue();
                throw new IndexOutOfBoundsException("Collection doesn't contain element at index " + this.f4011e + '.');
        }
    }
}
