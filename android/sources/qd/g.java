package qd;

import android.net.Uri;
import android.text.TextUtils;
import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import hc.g1;
import ie.m0;
import j$.util.DesugarTimeZone;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* loaded from: classes3.dex */
public final class g implements m0 {

    /* renamed from: d, reason: collision with root package name */
    public static final Pattern f16832d = Pattern.compile("(.+?)(Z|((\\+|-|−)(\\d\\d)(:?(\\d\\d))?))");

    @Override // ie.m0
    public final Object f(Uri uri, ie.n nVar) {
        String readLine = new BufferedReader(new InputStreamReader(nVar, ei.d.f8100c)).readLine();
        try {
            Matcher matcher = f16832d.matcher(readLine);
            if (!matcher.matches()) {
                throw g1.b("Couldn't parse timestamp: " + readLine, null);
            }
            String group = matcher.group(1);
            SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss", Locale.US);
            simpleDateFormat.setTimeZone(DesugarTimeZone.getTimeZone("UTC"));
            long time = simpleDateFormat.parse(group).getTime();
            if (!"Z".equals(matcher.group(2))) {
                long j = "+".equals(matcher.group(4)) ? 1L : -1L;
                long parseLong = Long.parseLong(matcher.group(5));
                String group2 = matcher.group(7);
                time -= (((parseLong * 60) + (TextUtils.isEmpty(group2) ? 0L : Long.parseLong(group2))) * LogThrottleSingleton.RATE_LIMIT_ONE_MINUTE) * j;
            }
            return Long.valueOf(time);
        } catch (ParseException e9) {
            throw g1.b(null, e9);
        }
    }
}
