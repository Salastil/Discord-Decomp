package q9;

import com.discord.crash_reporting.c;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* loaded from: classes3.dex */
public abstract class a {
    public static final ExecutorService a = Executors.newCachedThreadPool(new c(3));
}
