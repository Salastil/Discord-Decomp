package androidx.constraintlayout.widget;

import android.content.Context;
import android.content.res.XmlResourceParser;
import android.util.Log;
import android.util.SparseArray;
import android.util.Xml;
import com.facebook.react.devsupport.StackTraceHelper;
import java.io.IOException;
import java.util.Locale;
import org.xmlpull.v1.XmlPullParserException;

/* loaded from: classes.dex */
public final class ConstraintLayoutStates {
    public final ConstraintLayout a;

    /* renamed from: b, reason: collision with root package name */
    public int f1311b = -1;

    /* renamed from: c, reason: collision with root package name */
    public int f1312c = -1;

    /* renamed from: d, reason: collision with root package name */
    public final SparseArray f1313d = new SparseArray();

    /* renamed from: e, reason: collision with root package name */
    public final SparseArray f1314e = new SparseArray();

    public ConstraintLayoutStates(Context context, ConstraintLayout constraintLayout, int i5) {
        String str;
        this.a = constraintLayout;
        XmlResourceParser xml = context.getResources().getXml(i5);
        try {
            d dVar = null;
            for (int eventType = xml.getEventType(); eventType != 1; eventType = xml.next()) {
                if (eventType == 0) {
                    xml.getName();
                } else if (eventType == 2) {
                    String name = xml.getName();
                    switch (name.hashCode()) {
                        case -1349929691:
                            if (name.equals("ConstraintSet")) {
                                a(context, xml);
                                break;
                            } else {
                                break;
                            }
                        case 80204913:
                            if (name.equals("State")) {
                                dVar = new d(context, xml);
                                this.f1313d.put(dVar.a, dVar);
                                break;
                            } else {
                                break;
                            }
                        case 1382829617:
                            str = "StateSet";
                            name.equals(str);
                            break;
                        case 1657696882:
                            str = "layoutDescription";
                            name.equals(str);
                            break;
                        case 1901439077:
                            if (name.equals("Variant")) {
                                e eVar = new e(context, xml);
                                if (dVar != null) {
                                    dVar.f1333b.add(eVar);
                                    break;
                                } else {
                                    break;
                                }
                            } else {
                                break;
                            }
                    }
                }
            }
        } catch (IOException e9) {
            e9.printStackTrace();
        } catch (XmlPullParserException e10) {
            e10.printStackTrace();
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:125:0x0205, code lost:
    
        continue;
     */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue
    java.lang.NullPointerException: Cannot invoke "java.util.List.iterator()" because the return value of "jadx.core.dex.visitors.regions.SwitchOverStringVisitor$SwitchData.getNewCases()" is null
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.restoreSwitchOverString(SwitchOverStringVisitor.java:109)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.visitRegion(SwitchOverStringVisitor.java:66)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:77)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:82)
     */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0105 A[Catch: IOException -> 0x008d, XmlPullParserException -> 0x0090, TryCatch #2 {IOException -> 0x008d, XmlPullParserException -> 0x0090, blocks: (B:18:0x005e, B:27:0x0205, B:28:0x0070, B:29:0x007e, B:32:0x0083, B:40:0x0093, B:43:0x00ad, B:46:0x009c, B:50:0x00a5, B:53:0x00bb, B:56:0x00ca, B:58:0x00d2, B:61:0x00dc, B:65:0x0105, B:68:0x010c, B:69:0x0124, B:71:0x00e5, B:73:0x00ed, B:76:0x00fb, B:79:0x0125, B:81:0x012d, B:84:0x013b, B:87:0x0145, B:90:0x0150, B:91:0x0168, B:93:0x0169, B:96:0x0173, B:99:0x017e, B:100:0x0196, B:102:0x0197, B:104:0x019f, B:107:0x01a8, B:110:0x01b2, B:113:0x01bc, B:114:0x01d4, B:116:0x01d5, B:119:0x01df, B:122:0x01e9, B:123:0x0201, B:126:0x0202), top: B:17:0x005e }] */
    /* JADX WARN: Removed duplicated region for block: B:67:0x010c A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(Context context, XmlResourceParser xmlResourceParser) {
        int eventType;
        g gVar;
        ConstraintSet constraintSet = new ConstraintSet();
        int attributeCount = xmlResourceParser.getAttributeCount();
        for (int i5 = 0; i5 < attributeCount; i5++) {
            String attributeName = xmlResourceParser.getAttributeName(i5);
            String attributeValue = xmlResourceParser.getAttributeValue(i5);
            if (attributeName != null && attributeValue != null && StackTraceHelper.ID_KEY.equals(attributeName)) {
                int identifier = attributeValue.contains("/") ? context.getResources().getIdentifier(attributeValue.substring(attributeValue.indexOf(47) + 1), StackTraceHelper.ID_KEY, context.getPackageName()) : -1;
                if (identifier == -1) {
                    if (attributeValue.length() > 1) {
                        identifier = Integer.parseInt(attributeValue.substring(1));
                    } else {
                        Log.e("ConstraintLayoutStates", "error in parsing id");
                    }
                }
                try {
                    eventType = xmlResourceParser.getEventType();
                    gVar = null;
                } catch (IOException e9) {
                    e9.printStackTrace();
                } catch (XmlPullParserException e10) {
                    e10.printStackTrace();
                }
                while (eventType != 1) {
                    if (eventType == 0) {
                        xmlResourceParser.getName();
                    } else if (eventType == 2) {
                        String name = xmlResourceParser.getName();
                        switch (name.hashCode()) {
                            case -2025855158:
                                if (name.equals("Layout")) {
                                    if (gVar == null) {
                                        throw new RuntimeException("XML parser error must be within a Constraint " + xmlResourceParser.getLineNumber());
                                    }
                                    gVar.f1352d.a(context, Xml.asAttributeSet(xmlResourceParser));
                                    break;
                                } else {
                                    continue;
                                }
                            case -1984451626:
                                if (name.equals("Motion")) {
                                    if (gVar == null) {
                                        throw new RuntimeException("XML parser error must be within a Constraint " + xmlResourceParser.getLineNumber());
                                    }
                                    gVar.f1351c.a(context, Xml.asAttributeSet(xmlResourceParser));
                                    break;
                                } else {
                                    continue;
                                }
                            case -1962203927:
                                if (name.equals("ConstraintOverride")) {
                                    gVar = ConstraintSet.f(context, Xml.asAttributeSet(xmlResourceParser), true);
                                    break;
                                } else {
                                    break;
                                }
                            case -1269513683:
                                if (name.equals("PropertySet")) {
                                    if (gVar == null) {
                                        throw new RuntimeException("XML parser error must be within a Constraint " + xmlResourceParser.getLineNumber());
                                    }
                                    gVar.f1350b.a(context, Xml.asAttributeSet(xmlResourceParser));
                                    break;
                                } else {
                                    continue;
                                }
                            case -1238332596:
                                if (name.equals("Transform")) {
                                    if (gVar == null) {
                                        throw new RuntimeException("XML parser error must be within a Constraint " + xmlResourceParser.getLineNumber());
                                    }
                                    gVar.f1353e.a(context, Xml.asAttributeSet(xmlResourceParser));
                                    break;
                                } else {
                                    continue;
                                }
                            case -71750448:
                                if (name.equals("Guideline")) {
                                    gVar = ConstraintSet.f(context, Xml.asAttributeSet(xmlResourceParser), false);
                                    gVar.f1352d.a = true;
                                    break;
                                } else {
                                    break;
                                }
                            case 366511058:
                                if (!name.equals("CustomMethod")) {
                                    continue;
                                }
                                if (gVar != null) {
                                    throw new RuntimeException("XML parser error must be within a Constraint " + xmlResourceParser.getLineNumber());
                                }
                                a.a(context, xmlResourceParser, gVar.f1354f);
                                break;
                            case 1331510167:
                                if (name.equals("Barrier")) {
                                    gVar = ConstraintSet.f(context, Xml.asAttributeSet(xmlResourceParser), false);
                                    gVar.f1352d.f1367g0 = 1;
                                    break;
                                } else {
                                    break;
                                }
                            case 1791837707:
                                if (!name.equals("CustomAttribute")) {
                                    continue;
                                } else if (gVar != null) {
                                }
                                break;
                            case 1803088381:
                                if (name.equals("Constraint")) {
                                    gVar = ConstraintSet.f(context, Xml.asAttributeSet(xmlResourceParser), false);
                                    break;
                                } else {
                                    break;
                                }
                        }
                    } else if (eventType == 3) {
                        String lowerCase = xmlResourceParser.getName().toLowerCase(Locale.ROOT);
                        switch (lowerCase.hashCode()) {
                            case -2075718416:
                                if (!lowerCase.equals("guideline")) {
                                    break;
                                }
                                constraintSet.f1319c.put(Integer.valueOf(gVar.a), gVar);
                                gVar = null;
                                break;
                            case -190376483:
                                if (lowerCase.equals("constraint")) {
                                    constraintSet.f1319c.put(Integer.valueOf(gVar.a), gVar);
                                    gVar = null;
                                    break;
                                } else {
                                    break;
                                }
                            case 426575017:
                                if (lowerCase.equals("constraintoverride")) {
                                    constraintSet.f1319c.put(Integer.valueOf(gVar.a), gVar);
                                    gVar = null;
                                    break;
                                } else {
                                    break;
                                }
                            case 2146106725:
                                if (lowerCase.equals("constraintset")) {
                                    this.f1314e.put(identifier, constraintSet);
                                    return;
                                }
                                break;
                        }
                    }
                    eventType = xmlResourceParser.next();
                }
                this.f1314e.put(identifier, constraintSet);
                return;
            }
        }
    }
}
