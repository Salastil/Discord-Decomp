package io.sentry.react;

import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.events.PointerEventHelper;
import io.sentry.Breadcrumb;
import io.sentry.android.replay.DefaultReplayBreadcrumbConverter;
import io.sentry.rrweb.l;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class RNSentryReplayBreadcrumbConverter extends DefaultReplayBreadcrumbConverter {
    public static String getTouchPathMessage(Object obj) {
        if (!(obj instanceof List)) {
            return null;
        }
        List list = (List) obj;
        if (list.isEmpty()) {
            return null;
        }
        StringBuilder sb2 = new StringBuilder();
        for (int min = Math.min(3, list.size() - 1); min >= 0; min--) {
            Object obj2 = list.get(min);
            if (!(obj2 instanceof Map)) {
                return null;
            }
            Map map = (Map) obj2;
            Object obj3 = map.get(StackTraceHelper.NAME_KEY);
            Object obj4 = map.get("label");
            boolean z5 = obj4 instanceof String;
            if (!(obj3 instanceof String) && !z5) {
                return null;
            }
            if (z5) {
                sb2.append(obj4);
            } else {
                sb2.append(obj3);
            }
            Object obj5 = map.get("element");
            Object obj6 = map.get("file");
            boolean z6 = obj5 instanceof String;
            boolean z7 = obj6 instanceof String;
            if (z6 && z7) {
                sb2.append('(');
                sb2.append(obj5);
                sb2.append(", ");
                sb2.append(obj6);
                sb2.append(')');
            } else if (z6) {
                sb2.append('(');
                sb2.append(obj5);
                sb2.append(')');
            } else if (z7) {
                sb2.append('(');
                sb2.append(obj6);
                sb2.append(')');
            }
            if (min > 0) {
                sb2.append(" > ");
            }
        }
        return sb2.toString();
    }

    private void setRRWebEventDefaultsFrom(@NotNull io.sentry.rrweb.a aVar, @NotNull Breadcrumb breadcrumb) {
        aVar.E = breadcrumb.F;
        ConcurrentHashMap concurrentHashMap = breadcrumb.f10977x;
        aVar.F = concurrentHashMap == null ? null : new ConcurrentHashMap(concurrentHashMap);
        aVar.f11943e = breadcrumb.b().getTime();
        aVar.f11938v = breadcrumb.b().getTime() / 1000.0d;
        aVar.f11939w = "default";
    }

    @Override // io.sentry.android.replay.DefaultReplayBreadcrumbConverter, io.sentry.i3
    public io.sentry.rrweb.b convert(@NotNull Breadcrumb breadcrumb) {
        String str = breadcrumb.f10978y;
        if (str == null || "sentry.event".equals(str) || "sentry.transaction".equals(breadcrumb.f10978y) || "http".equals(breadcrumb.f10978y)) {
            return null;
        }
        if (PointerEventHelper.POINTER_TYPE_TOUCH.equals(breadcrumb.f10978y)) {
            return convertTouchBreadcrumb(breadcrumb);
        }
        if ("navigation".equals(breadcrumb.f10978y)) {
            return convertNavigationBreadcrumb(breadcrumb);
        }
        if ("xhr".equals(breadcrumb.f10978y)) {
            return convertNetworkBreadcrumb(breadcrumb);
        }
        io.sentry.rrweb.b convert = super.convert(breadcrumb);
        if ((convert instanceof io.sentry.rrweb.a) && "navigation".equals(((io.sentry.rrweb.a) convert).f11940x)) {
            return null;
        }
        return convert;
    }

    @NotNull
    public io.sentry.rrweb.b convertNavigationBreadcrumb(@NotNull Breadcrumb breadcrumb) {
        io.sentry.rrweb.a aVar = new io.sentry.rrweb.a();
        aVar.f11940x = breadcrumb.f10978y;
        setRRWebEventDefaultsFrom(aVar, breadcrumb);
        return aVar;
    }

    public io.sentry.rrweb.b convertNetworkBreadcrumb(@NotNull Breadcrumb breadcrumb) {
        Double d6 = breadcrumb.f10977x.get("start_timestamp") instanceof Number ? (Double) breadcrumb.f10977x.get("start_timestamp") : null;
        Double d7 = breadcrumb.f10977x.get("end_timestamp") instanceof Number ? (Double) breadcrumb.f10977x.get("end_timestamp") : null;
        String str = breadcrumb.f10977x.get("url") instanceof String ? (String) breadcrumb.f10977x.get("url") : null;
        if (d6 == null || d7 == null || str == null) {
            return null;
        }
        HashMap hashMap = new HashMap();
        if (breadcrumb.f10977x.get("method") instanceof String) {
            hashMap.put("method", breadcrumb.f10977x.get("method"));
        }
        if (breadcrumb.f10977x.get("status_code") instanceof Double) {
            Double d8 = (Double) breadcrumb.f10977x.get("status_code");
            if (d8.doubleValue() > 0.0d) {
                hashMap.put("statusCode", Integer.valueOf(d8.intValue()));
            }
        }
        if (breadcrumb.f10977x.get("request_body_size") instanceof Double) {
            hashMap.put("requestBodySize", breadcrumb.f10977x.get("request_body_size"));
        }
        if (breadcrumb.f10977x.get("response_body_size") instanceof Double) {
            hashMap.put("responseBodySize", breadcrumb.f10977x.get("response_body_size"));
        }
        l lVar = new l();
        lVar.f11965v = "resource.http";
        lVar.f11967x = d6.doubleValue() / 1000.0d;
        lVar.f11968y = d7.doubleValue() / 1000.0d;
        lVar.f11966w = str;
        lVar.E = new ConcurrentHashMap(hashMap);
        return lVar;
    }

    @NotNull
    public io.sentry.rrweb.b convertTouchBreadcrumb(@NotNull Breadcrumb breadcrumb) {
        io.sentry.rrweb.a aVar = new io.sentry.rrweb.a();
        aVar.f11940x = "ui.tap";
        aVar.f11941y = getTouchPathMessage(breadcrumb.f10977x.get("path"));
        setRRWebEventDefaultsFrom(aVar, breadcrumb);
        return aVar;
    }
}
