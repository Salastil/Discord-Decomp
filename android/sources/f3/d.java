package f3;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.ResolveInfo;
import android.content.res.XmlResourceParser;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Log;
import android.util.Xml;
import androidx.core.content.pm.ShortcutInfoCompat;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.File;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlSerializer;

/* loaded from: classes.dex */
public abstract class d {
    public static volatile ArrayList a;

    /* renamed from: b, reason: collision with root package name */
    public static final Object f8313b = new Object();

    public static String a(XmlResourceParser xmlResourceParser, String str) {
        String attributeValue = xmlResourceParser.getAttributeValue("http://schemas.android.com/apk/res/android", str);
        return attributeValue == null ? xmlResourceParser.getAttributeValue(null, str) : attributeValue;
    }

    public static String b(XmlPullParser xmlPullParser, String str) {
        String attributeValue = xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", str);
        return attributeValue == null ? xmlPullParser.getAttributeValue(null, str) : attributeValue;
    }

    public static s.e c(Context context, File file) {
        g f2;
        s.e eVar = new s.e(0);
        try {
            FileInputStream fileInputStream = new FileInputStream(file);
            try {
                if (file.exists()) {
                    XmlPullParser newPullParser = Xml.newPullParser();
                    newPullParser.setInput(fileInputStream, "UTF_8");
                    while (true) {
                        int next = newPullParser.next();
                        if (next == 1) {
                            break;
                        }
                        if (next == 2 && newPullParser.getName().equals("target") && (f2 = f(newPullParser, context)) != null) {
                            eVar.put(f2.f8327c.f1500b, f2);
                        }
                    }
                }
                fileInputStream.close();
                return eVar;
            } finally {
            }
        } catch (Exception e9) {
            file.delete();
            Log.e("ShortcutInfoCompatSaver", "Failed to load saved values from file " + file.getAbsolutePath() + ". Old state removed, new added", e9);
            return eVar;
        }
    }

    public static c d(XmlResourceParser xmlResourceParser) {
        String a10 = a(xmlResourceParser, "targetClass");
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        while (true) {
            int next = xmlResourceParser.next();
            if (next != 1) {
                if (next != 2) {
                    if (next == 3 && xmlResourceParser.getName().equals("share-target")) {
                        break;
                    }
                } else {
                    String name = xmlResourceParser.getName();
                    name.getClass();
                    if (name.equals("data")) {
                        a(xmlResourceParser, "scheme");
                        a(xmlResourceParser, "host");
                        a(xmlResourceParser, "port");
                        a(xmlResourceParser, "path");
                        a(xmlResourceParser, "pathPattern");
                        a(xmlResourceParser, "pathPrefix");
                        arrayList.add(new b(a(xmlResourceParser, "mimeType")));
                    } else if (name.equals("category")) {
                        arrayList2.add(a(xmlResourceParser, StackTraceHelper.NAME_KEY));
                    }
                }
            } else {
                break;
            }
        }
        if (arrayList.isEmpty() || a10 == null || arrayList2.isEmpty()) {
            return null;
        }
        return new c((b[]) arrayList.toArray(new b[arrayList.size()]), a10, (String[]) arrayList2.toArray(new String[arrayList2.size()]));
    }

    public static ArrayList e(Context context) {
        c d6;
        ArrayList arrayList = new ArrayList();
        Intent intent = new Intent("android.intent.action.MAIN");
        intent.addCategory("android.intent.category.LAUNCHER");
        intent.setPackage(context.getPackageName());
        List<ResolveInfo> queryIntentActivities = context.getPackageManager().queryIntentActivities(intent, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        if (queryIntentActivities != null) {
            Iterator<ResolveInfo> it = queryIntentActivities.iterator();
            while (it.hasNext()) {
                ActivityInfo activityInfo = it.next().activityInfo;
                Bundle bundle = activityInfo.metaData;
                if (bundle != null && bundle.containsKey("android.app.shortcuts")) {
                    ArrayList arrayList2 = new ArrayList();
                    XmlResourceParser loadXmlMetaData = activityInfo.loadXmlMetaData(context.getPackageManager(), "android.app.shortcuts");
                    if (loadXmlMetaData == null) {
                        throw new IllegalArgumentException("Failed to open android.app.shortcuts meta-data resource of " + activityInfo.name);
                    }
                    while (true) {
                        try {
                            int next = loadXmlMetaData.next();
                            if (next == 1) {
                                break;
                            }
                            if (next == 2 && loadXmlMetaData.getName().equals("share-target") && (d6 = d(loadXmlMetaData)) != null) {
                                arrayList2.add(d6);
                            }
                        } catch (Exception e9) {
                            Log.e("ShareTargetXmlParser", "Failed to parse the Xml resource: ", e9);
                        }
                    }
                    loadXmlMetaData.close();
                    arrayList.addAll(arrayList2);
                }
            }
        }
        return arrayList;
    }

    public static g f(XmlPullParser xmlPullParser, Context context) {
        Intent intent;
        if (!xmlPullParser.getName().equals("target")) {
            return null;
        }
        String b10 = b(xmlPullParser, StackTraceHelper.ID_KEY);
        String b11 = b(xmlPullParser, "short_label");
        if (TextUtils.isEmpty(b10) || TextUtils.isEmpty(b11)) {
            return null;
        }
        int parseInt = Integer.parseInt(b(xmlPullParser, "rank"));
        String b12 = b(xmlPullParser, "long_label");
        String b13 = b(xmlPullParser, "disabled_message");
        String b14 = b(xmlPullParser, "component");
        ComponentName unflattenFromString = TextUtils.isEmpty(b14) ? null : ComponentName.unflattenFromString(b14);
        String b15 = b(xmlPullParser, "icon_resource_name");
        String b16 = b(xmlPullParser, "icon_bitmap_path");
        ArrayList arrayList = new ArrayList();
        HashSet hashSet = new HashSet();
        while (true) {
            int next = xmlPullParser.next();
            if (next != 1) {
                if (next != 2) {
                    if (next == 3 && xmlPullParser.getName().equals("target")) {
                        break;
                    }
                } else {
                    String name = xmlPullParser.getName();
                    name.getClass();
                    if (name.equals("intent")) {
                        String b17 = b(xmlPullParser, "action");
                        String b18 = b(xmlPullParser, "targetPackage");
                        String b19 = b(xmlPullParser, "targetClass");
                        if (b17 == null) {
                            intent = null;
                        } else {
                            intent = new Intent(b17);
                            if (!TextUtils.isEmpty(b18) && !TextUtils.isEmpty(b19)) {
                                intent.setClassName(b18, b19);
                            }
                        }
                        if (intent != null) {
                            arrayList.add(intent);
                        }
                    } else if (name.equals("categories")) {
                        String b20 = b(xmlPullParser, StackTraceHelper.NAME_KEY);
                        if (!TextUtils.isEmpty(b20)) {
                            hashSet.add(b20);
                        }
                    }
                }
            } else {
                break;
            }
        }
        ShortcutInfoCompat shortcutInfoCompat = new ShortcutInfoCompat();
        shortcutInfoCompat.a = context;
        shortcutInfoCompat.f1500b = b10;
        shortcutInfoCompat.f1503e = b11;
        shortcutInfoCompat.f1509m = parseInt;
        if (!TextUtils.isEmpty(b12)) {
            shortcutInfoCompat.f1504f = b12;
        }
        if (!TextUtils.isEmpty(b13)) {
            shortcutInfoCompat.f1505g = b13;
        }
        if (unflattenFromString != null) {
            shortcutInfoCompat.f1502d = unflattenFromString;
        }
        if (!arrayList.isEmpty()) {
            shortcutInfoCompat.f1501c = (Intent[]) arrayList.toArray(new Intent[0]);
        }
        if (!hashSet.isEmpty()) {
            s.f fVar = new s.f(0);
            fVar.addAll(hashSet);
            shortcutInfoCompat.j = fVar;
        }
        if (TextUtils.isEmpty(shortcutInfoCompat.f1503e)) {
            throw new IllegalArgumentException("Shortcut must have a non-empty label");
        }
        Intent[] intentArr = shortcutInfoCompat.f1501c;
        if (intentArr == null || intentArr.length == 0) {
            throw new IllegalArgumentException("Shortcut must have an intent");
        }
        return new g(shortcutInfoCompat, b15, b16);
    }

    public static void g(XmlSerializer xmlSerializer, String str, String str2) {
        if (TextUtils.isEmpty(str2)) {
            return;
        }
        xmlSerializer.attribute(null, str, str2);
    }

    public static void h(XmlSerializer xmlSerializer, g gVar) {
        xmlSerializer.startTag(null, "target");
        ShortcutInfoCompat shortcutInfoCompat = gVar.f8327c;
        String str = gVar.f8326b;
        String str2 = gVar.a;
        g(xmlSerializer, StackTraceHelper.ID_KEY, shortcutInfoCompat.f1500b);
        g(xmlSerializer, "short_label", shortcutInfoCompat.f1503e.toString());
        g(xmlSerializer, "rank", Integer.toString(shortcutInfoCompat.f1509m));
        if (!TextUtils.isEmpty(shortcutInfoCompat.f1504f)) {
            g(xmlSerializer, "long_label", shortcutInfoCompat.f1504f.toString());
        }
        if (!TextUtils.isEmpty(shortcutInfoCompat.f1505g)) {
            g(xmlSerializer, "disabled_message", shortcutInfoCompat.f1505g.toString());
        }
        ComponentName componentName = shortcutInfoCompat.f1502d;
        if (componentName != null) {
            g(xmlSerializer, "component", componentName.flattenToString());
        }
        if (!TextUtils.isEmpty(str2)) {
            g(xmlSerializer, "icon_resource_name", str2);
        }
        if (!TextUtils.isEmpty(str)) {
            g(xmlSerializer, "icon_bitmap_path", str);
        }
        Intent[] intentArr = shortcutInfoCompat.f1501c;
        for (Intent intent : (Intent[]) Arrays.copyOf(intentArr, intentArr.length)) {
            xmlSerializer.startTag(null, "intent");
            g(xmlSerializer, "action", intent.getAction());
            if (intent.getComponent() != null) {
                g(xmlSerializer, "targetPackage", intent.getComponent().getPackageName());
                g(xmlSerializer, "targetClass", intent.getComponent().getClassName());
            }
            xmlSerializer.endTag(null, "intent");
        }
        for (String str3 : shortcutInfoCompat.j) {
            if (!TextUtils.isEmpty(str3)) {
                xmlSerializer.startTag(null, "categories");
                g(xmlSerializer, StackTraceHelper.NAME_KEY, str3);
                xmlSerializer.endTag(null, "categories");
            }
        }
        xmlSerializer.endTag(null, "target");
    }
}
