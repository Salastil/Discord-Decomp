package com.horcrux.svg;

import com.facebook.react.bridge.Dynamic;
import com.facebook.react.bridge.ReadableArray;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class r0 {
    public final double a;

    /* renamed from: b, reason: collision with root package name */
    public final SVGLength$UnitType f6419b;

    public r0() {
        this.a = 0.0d;
        this.f6419b = SVGLength$UnitType.UNKNOWN;
    }

    public static ArrayList a(Dynamic dynamic) {
        int i5 = q0.a[dynamic.getType().ordinal()];
        if (i5 == 1) {
            ArrayList arrayList = new ArrayList(1);
            arrayList.add(new r0(dynamic.asDouble()));
            return arrayList;
        }
        int i6 = 0;
        if (i5 == 2) {
            String[] split = dynamic.asString().trim().replaceAll(",", " ").split(" ");
            ArrayList arrayList2 = new ArrayList(split.length);
            int length = split.length;
            while (i6 < length) {
                arrayList2.add(new r0(split[i6]));
                i6++;
            }
            return arrayList2;
        }
        if (i5 != 3) {
            return null;
        }
        ReadableArray asArray = dynamic.asArray();
        int size = asArray.size();
        ArrayList arrayList3 = new ArrayList(size);
        while (i6 < size) {
            arrayList3.add(b(asArray.getDynamic(i6)));
            i6++;
        }
        return arrayList3;
    }

    public static r0 b(Dynamic dynamic) {
        int i5 = q0.a[dynamic.getType().ordinal()];
        return i5 != 1 ? i5 != 2 ? new r0() : new r0(dynamic.asString()) : new r0(dynamic.asDouble());
    }

    public static String c(Dynamic dynamic) {
        int i5 = q0.a[dynamic.getType().ordinal()];
        if (i5 == 1) {
            return String.valueOf(dynamic.asDouble());
        }
        if (i5 != 2) {
            return null;
        }
        return dynamic.asString();
    }

    public r0(double d6) {
        this.a = d6;
        this.f6419b = SVGLength$UnitType.NUMBER;
    }

    public r0(String str) {
        String trim = str.trim();
        int length = trim.length();
        int i5 = length - 1;
        if (length != 0 && !trim.equals("normal")) {
            if (trim.codePointAt(i5) == 37) {
                this.f6419b = SVGLength$UnitType.PERCENTAGE;
                this.a = Double.valueOf(trim.substring(0, i5)).doubleValue();
                return;
            }
            int i6 = length - 2;
            if (i6 > 0) {
                String substring = trim.substring(i6);
                substring.getClass();
                switch (substring) {
                    case "cm":
                        this.f6419b = SVGLength$UnitType.CM;
                        length = i6;
                        break;
                    case "em":
                        this.f6419b = SVGLength$UnitType.EMS;
                        length = i6;
                        break;
                    case "ex":
                        this.f6419b = SVGLength$UnitType.EXS;
                        length = i6;
                        break;
                    case "in":
                        this.f6419b = SVGLength$UnitType.IN;
                        length = i6;
                        break;
                    case "mm":
                        this.f6419b = SVGLength$UnitType.MM;
                        length = i6;
                        break;
                    case "pc":
                        this.f6419b = SVGLength$UnitType.PC;
                        length = i6;
                        break;
                    case "pt":
                        this.f6419b = SVGLength$UnitType.PT;
                        length = i6;
                        break;
                    case "px":
                        this.f6419b = SVGLength$UnitType.NUMBER;
                        length = i6;
                        break;
                    default:
                        this.f6419b = SVGLength$UnitType.NUMBER;
                        break;
                }
                this.a = Double.valueOf(trim.substring(0, length)).doubleValue();
                return;
            }
            this.f6419b = SVGLength$UnitType.NUMBER;
            this.a = Double.valueOf(trim).doubleValue();
            return;
        }
        this.f6419b = SVGLength$UnitType.UNKNOWN;
        this.a = 0.0d;
    }
}
