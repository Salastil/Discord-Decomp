package zr;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class a {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public List f21405b;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f21406c;

    /* renamed from: d, reason: collision with root package name */
    public final HashSet f21407d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f21408e;

    /* renamed from: f, reason: collision with root package name */
    public final ArrayList f21409f;

    /* renamed from: g, reason: collision with root package name */
    public final ArrayList f21410g;

    public a(String serialName) {
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        this.a = serialName;
        this.f21405b = m0.f13512d;
        this.f21406c = new ArrayList();
        this.f21407d = new HashSet();
        this.f21408e = new ArrayList();
        this.f21409f = new ArrayList();
        this.f21410g = new ArrayList();
    }

    public static void a(a aVar, String elementName, SerialDescriptor descriptor) {
        m0 annotations = m0.f13512d;
        aVar.getClass();
        Intrinsics.checkNotNullParameter(elementName, "elementName");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        if (!aVar.f21407d.add(elementName)) {
            StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Element with name '", elementName, "' is already registered in ");
            m5.append(aVar.a);
            throw new IllegalArgumentException(m5.toString().toString());
        }
        aVar.f21406c.add(elementName);
        aVar.f21408e.add(descriptor);
        aVar.f21409f.add(annotations);
        aVar.f21410g.add(false);
    }
}
