package kotlinx.serialization.descriptors;

import d9.a;
import java.util.List;

/* loaded from: classes3.dex */
public interface SerialDescriptor {
    String a();

    a b();

    boolean d();

    int e(String str);

    int f();

    String g(int i5);

    List getAnnotations();

    List h(int i5);

    SerialDescriptor i(int i5);

    boolean isInline();

    boolean j(int i5);
}
