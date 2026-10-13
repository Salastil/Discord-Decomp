package ha;

import android.app.ActivityManager;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.common.internal.Supplier;
import com.facebook.imagepipeline.cache.MemoryCacheParams;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public class f implements Supplier {
    private static final int MAX_CACHE_ENTRIES = 256;
    private static final int MAX_CACHE_ENTRY_SIZE = Integer.MAX_VALUE;
    private static final int MAX_EVICTION_QUEUE_ENTRIES = Integer.MAX_VALUE;
    private static final int MAX_EVICTION_QUEUE_SIZE = Integer.MAX_VALUE;
    private static final long PARAMS_CHECK_INTERVAL_MS = TimeUnit.MINUTES.toMillis(5);
    private final ActivityManager mActivityManager;

    public f(ActivityManager activityManager) {
        this.mActivityManager = activityManager;
    }

    @Override // com.facebook.common.internal.Supplier
    public MemoryCacheParams get() {
        int min = Math.min(this.mActivityManager.getMemoryClass() * KeyCommandDescriptor.ModifierFlags.COMMAND, Integer.MAX_VALUE);
        return new MemoryCacheParams(min < 33554432 ? 4194304 : min < 67108864 ? 6291456 : min / 4, 256, Integer.MAX_VALUE, PARAMS_CHECK_INTERVAL_MS, Integer.MAX_VALUE);
    }
}
