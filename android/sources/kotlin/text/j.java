package kotlin.text;

import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class j {

    /* renamed from: d, reason: collision with root package name */
    @NotNull
    public static final g f13573d = new g(null);

    /* renamed from: e, reason: collision with root package name */
    public static final j f13574e;
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final f f13575b;

    /* renamed from: c, reason: collision with root package name */
    public final i f13576c;

    static {
        e eVar = f.a;
        eVar.getClass();
        f fVar = f.f13570b;
        h hVar = i.f13571b;
        hVar.getClass();
        i iVar = i.f13572c;
        f13574e = new j(false, fVar, iVar);
        eVar.getClass();
        hVar.getClass();
        new j(true, fVar, iVar);
    }

    public j(boolean z5, f bytes, i number) {
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        Intrinsics.checkNotNullParameter(number, "number");
        this.a = z5;
        this.f13575b = bytes;
        this.f13576c = number;
    }

    public final String toString() {
        StringBuilder o6 = k0.d.o("HexFormat(\n    upperCase = ");
        o6.append(this.a);
        o6.append(",\n    bytes = BytesHexFormat(\n");
        this.f13575b.a("        ", o6);
        o6.append('\n');
        o6.append("    ),");
        o6.append('\n');
        o6.append("    number = NumberHexFormat(");
        o6.append('\n');
        this.f13576c.a("        ", o6);
        o6.append('\n');
        o6.append("    )");
        o6.append('\n');
        o6.append(")");
        return o6.toString();
    }
}
