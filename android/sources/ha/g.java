package ha;

import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.common.internal.Supplier;
import com.facebook.imagepipeline.cache.MemoryCacheParams;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public class g implements Supplier {
    private static final int MAX_CACHE_ENTRIES = Integer.MAX_VALUE;
    private static final int MAX_EVICTION_QUEUE_ENTRIES = Integer.MAX_VALUE;
    private static final long PARAMS_CHECK_INTERVAL_MS = TimeUnit.MINUTES.toMillis(5);

    @Override // com.facebook.common.internal.Supplier
    public MemoryCacheParams get() {
        int min = (int) Math.min(Runtime.getRuntime().maxMemory(), 2147483647L);
        int i5 = min < 16777216 ? KeyCommandDescriptor.ModifierFlags.COMMAND : min < 33554432 ? KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD : 4194304;
        return new MemoryCacheParams(i5, Integer.MAX_VALUE, i5, PARAMS_CHECK_INTERVAL_MS, i5 / 8);
    }
}
