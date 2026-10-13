package gf;

import a5.h0;
import java.io.UnsupportedEncodingException;
import java.net.URI;
import java.net.URLDecoder;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.regex.Pattern;
import zf.i;

/* loaded from: classes3.dex */
public abstract class d {
    static {
        Pattern.compile("^(25[0-5]|2[0-4]\\d|[0-1]?\\d?\\d)(\\.(25[0-5]|2[0-4]\\d|[0-1]?\\d?\\d)){3}$");
        Pattern.compile("^(?:[0-9a-fA-F]{1,4}:){7}[0-9a-fA-F]{1,4}$");
        Pattern.compile("^((?:[0-9A-Fa-f]{1,4}(?::[0-9A-Fa-f]{1,4})*)?)::((?:[0-9A-Fa-f]{1,4}(?::[0-9A-Fa-f]{1,4})*)?)$");
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v0, types: [java.util.Map] */
    /* JADX WARN: Type inference failed for: r1v1, types: [java.util.Map] */
    /* JADX WARN: Type inference failed for: r1v2, types: [java.util.HashMap] */
    public static Map a(URI uri) {
        String str;
        ?? r12 = Collections.EMPTY_MAP;
        String rawQuery = uri.getRawQuery();
        if (rawQuery != null && rawQuery.length() > 0) {
            r12 = new HashMap();
            h0 h0Var = new h0(new rj.b(new zf.h('=')), false, 15);
            h0 h0Var2 = new h0(new rj.b(new zf.h('&')), true, 15);
            i iVar = new i(h0Var2, rawQuery, (zf.h) ((rj.b) h0Var2.f176i).f17393d);
            while (iVar.hasNext()) {
                String str2 = (String) iVar.next();
                str2.getClass();
                i iVar2 = new i(h0Var, str2, (zf.h) ((rj.b) h0Var.f176i).f17393d);
                ArrayList arrayList = new ArrayList();
                while (iVar2.hasNext()) {
                    arrayList.add((String) iVar2.next());
                }
                List unmodifiableList = Collections.unmodifiableList(arrayList);
                if (unmodifiableList.isEmpty() || unmodifiableList.size() > 2) {
                    throw new IllegalArgumentException("bad parameter");
                }
                try {
                    String decode = URLDecoder.decode((String) unmodifiableList.get(0), "UTF-8");
                    if (unmodifiableList.size() == 2) {
                        try {
                            str = URLDecoder.decode((String) unmodifiableList.get(1), "UTF-8");
                        } catch (UnsupportedEncodingException e9) {
                            throw new IllegalArgumentException(e9);
                        }
                    } else {
                        str = null;
                    }
                    r12.put(decode, str);
                } catch (UnsupportedEncodingException e10) {
                    throw new IllegalArgumentException(e10);
                }
            }
        }
        return r12;
    }
}
