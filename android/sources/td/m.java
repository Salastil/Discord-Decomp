package td;

import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public abstract class m implements md.a {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final List f18328b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f18329c;

    public m(String str, List list, boolean z5) {
        this.a = str;
        this.f18328b = Collections.unmodifiableList(list);
        this.f18329c = z5;
    }
}
