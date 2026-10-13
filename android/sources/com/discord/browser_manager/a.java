package com.discord.browser_manager;

import com.discord.chrome_custom_tabs.TrackedCustomTab;
import java.util.function.Function;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Function1 f3791b;

    public /* synthetic */ a(Function1 function1, int i5) {
        this.a = i5;
        this.f3791b = function1;
    }

    @Override // java.util.function.Function
    public final Object apply(Object obj) {
        Unit openUrlExternally$lambda$3;
        Unit launch$lambda$1;
        switch (this.a) {
            case 0:
                openUrlExternally$lambda$3 = BrowserManager.openUrlExternally$lambda$3(this.f3791b, (Throwable) obj);
                return openUrlExternally$lambda$3;
            default:
                launch$lambda$1 = TrackedCustomTab.launch$lambda$1(this.f3791b, (Throwable) obj);
                return launch$lambda$1;
        }
    }
}
