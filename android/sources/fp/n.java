package fp;

import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import lp.a0;

/* loaded from: classes3.dex */
public final class n {
    public final e4.i a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f8876b;

    /* renamed from: c, reason: collision with root package name */
    public final m f8877c;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f8875e = {com.discord.chat.bridge.botuikit.a.o(n.class, "kClass", "getKClass()Lorg/jetbrains/kotlin/descriptors/ClassDescriptor;", 0), com.discord.chat.bridge.botuikit.a.o(n.class, "kProperty", "getKProperty()Lorg/jetbrains/kotlin/descriptors/ClassDescriptor;", 0), com.discord.chat.bridge.botuikit.a.o(n.class, "kProperty0", "getKProperty0()Lorg/jetbrains/kotlin/descriptors/ClassDescriptor;", 0), com.discord.chat.bridge.botuikit.a.o(n.class, "kProperty1", "getKProperty1()Lorg/jetbrains/kotlin/descriptors/ClassDescriptor;", 0), com.discord.chat.bridge.botuikit.a.o(n.class, "kProperty2", "getKProperty2()Lorg/jetbrains/kotlin/descriptors/ClassDescriptor;", 0), com.discord.chat.bridge.botuikit.a.o(n.class, "kMutableProperty0", "getKMutableProperty0()Lorg/jetbrains/kotlin/descriptors/ClassDescriptor;", 0), com.discord.chat.bridge.botuikit.a.o(n.class, "kMutableProperty1", "getKMutableProperty1()Lorg/jetbrains/kotlin/descriptors/ClassDescriptor;", 0), com.discord.chat.bridge.botuikit.a.o(n.class, "kMutableProperty2", "getKMutableProperty2()Lorg/jetbrains/kotlin/descriptors/ClassDescriptor;", 0)};

    /* renamed from: d, reason: collision with root package name */
    public static final m f8874d = new m();

    public n(a0 module, e4.i notFoundClasses) {
        Intrinsics.checkNotNullParameter(module, "module");
        Intrinsics.checkNotNullParameter(notFoundClasses, "notFoundClasses");
        this.a = notFoundClasses;
        this.f8876b = fo.l.b(fo.m.f8827e, new l(module, 0));
        this.f8877c = new m();
    }
}
