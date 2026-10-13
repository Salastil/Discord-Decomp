package x7;

import com.discord.resource_usage.utils.ProcfsStats;
import java.util.function.Supplier;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Supplier {
    @Override // java.util.function.Supplier
    public final Object get() {
        char[] readBuffer$lambda$1;
        readBuffer$lambda$1 = ProcfsStats.readBuffer$lambda$1();
        return readBuffer$lambda$1;
    }
}
