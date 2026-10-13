package hs;

import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;
import java.util.Set;
import net.time4j.tz.o;

/* loaded from: classes3.dex */
public abstract class e {
    public static final Set a;

    /* renamed from: b, reason: collision with root package name */
    public static final Set f10246b;

    /* renamed from: c, reason: collision with root package name */
    public static final Collection f10247c;

    static {
        ns.a aVar;
        Set singleton = Collections.singleton(new os.a());
        a = singleton;
        f10246b = Collections.singleton(new os.b());
        Iterator it = singleton.iterator();
        while (true) {
            if (!it.hasNext()) {
                aVar = null;
                break;
            }
            o oVar = (o) it.next();
            if (oVar instanceof ns.a) {
                aVar = (ns.a) ns.a.class.cast(oVar);
                break;
            }
        }
        if (aVar == null) {
            f10247c = Collections.EMPTY_LIST;
        } else {
            f10247c = Collections.singleton(aVar);
        }
    }
}
