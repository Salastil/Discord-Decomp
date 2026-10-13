package cs;

import bs.i0;
import bs.v1;
import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class q implements SerialDescriptor {

    /* renamed from: b, reason: collision with root package name */
    public static final q f7335b = new q();

    /* renamed from: c, reason: collision with root package name */
    public static final String f7336c = "kotlinx.serialization.json.JsonObject";
    public final /* synthetic */ i0 a;

    public q() {
        nf.e.A(StringCompanionObject.INSTANCE);
        this.a = nf.e.b(v1.a, i.a).f3201d;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final String a() {
        return f7336c;
    }

    @Override // kotlinx.serialization.descriptors.SerialDescriptor
    public final d9.a b() {
        this.a.getClass();
        return zr.j.f21435v;
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
        return 2;
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
