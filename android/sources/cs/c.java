package cs;

import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class c implements SerialDescriptor {

    /* renamed from: b, reason: collision with root package name */
    public static final c f7326b = new c();

    /* renamed from: c, reason: collision with root package name */
    public static final String f7327c = "kotlinx.serialization.json.JsonArray";
    public final /* synthetic */ bs.c a = (bs.c) nf.e.a(i.a).f3172c;

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final String a() {
        return f7327c;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final d9.a b() {
        this.a.getClass();
        return zr.j.f21434u;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean d() {
        this.a.getClass();
        return false;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final int e(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return this.a.e(name);
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final int f() {
        this.a.getClass();
        return 1;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final String g(int i5) {
        this.a.getClass();
        return String.valueOf(i5);
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final List getAnnotations() {
        this.a.getClass();
        return m0.f13512d;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final List h(int i5) {
        return this.a.h(i5);
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final SerialDescriptor i(int i5) {
        return this.a.i(i5);
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean isInline() {
        this.a.getClass();
        return false;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final boolean j(int i5) {
        this.a.j(i5);
        return false;
    }
}
