package kp;

import ip.f;
import java.util.Collection;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import wq.s;

/* loaded from: classes3.dex */
public final class a implements b, d {

    /* renamed from: b, reason: collision with root package name */
    public static final a f13612b = new a(0);

    /* renamed from: c, reason: collision with root package name */
    public static final a f13613c = new a(1);

    /* renamed from: d, reason: collision with root package name */
    public static final a f13614d = new a(2);
    public final /* synthetic */ int a;

    public /* synthetic */ a(int i5) {
        this.a = i5;
    }

    @Override // kp.b
    public Collection a(f classDescriptor) {
        Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
        return m0.f13512d;
    }

    @Override // kp.b
    public Collection b(f classDescriptor) {
        Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
        return m0.f13512d;
    }

    @Override // kp.d
    public boolean c(f classDescriptor, s functionDescriptor) {
        switch (this.a) {
            case 1:
                Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
                Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
                return true;
            default:
                Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
                Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
                return !functionDescriptor.getAnnotations().r(e.a);
        }
    }

    @Override // kp.b
    public Collection d(f classDescriptor) {
        Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
        return m0.f13512d;
    }

    @Override // kp.b
    public Collection e(hq.e name, f classDescriptor) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
        return m0.f13512d;
    }
}
