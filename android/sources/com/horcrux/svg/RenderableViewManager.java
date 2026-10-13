package com.horcrux.svg;

import android.graphics.Matrix;
import android.graphics.Path;
import android.net.Uri;
import android.view.View;
import com.discord.jank_stats.JankStatsAggregatorKt;
import com.discord.span.utilities.spannable.BulletSpan;
import com.facebook.react.bridge.Dynamic;
import com.facebook.react.bridge.JavaOnlyArray;
import com.facebook.react.bridge.JavaOnlyMap;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.common.MapBuilder;
import com.facebook.react.common.ReactConstants;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.uimanager.annotations.ReactProp;
import com.facebook.react.viewmanagers.RNSVGCircleManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGCircleManagerInterface;
import com.facebook.react.viewmanagers.RNSVGClipPathManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface;
import com.facebook.react.viewmanagers.RNSVGDefsManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGDefsManagerInterface;
import com.facebook.react.viewmanagers.RNSVGEllipseManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface;
import com.facebook.react.viewmanagers.RNSVGFeBlendManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGFeBlendManagerInterface;
import com.facebook.react.viewmanagers.RNSVGFeColorMatrixManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGFeColorMatrixManagerInterface;
import com.facebook.react.viewmanagers.RNSVGFeCompositeManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGFeCompositeManagerInterface;
import com.facebook.react.viewmanagers.RNSVGFeFloodManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGFeFloodManagerInterface;
import com.facebook.react.viewmanagers.RNSVGFeGaussianBlurManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGFeGaussianBlurManagerInterface;
import com.facebook.react.viewmanagers.RNSVGFeMergeManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGFeMergeManagerInterface;
import com.facebook.react.viewmanagers.RNSVGFeOffsetManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGFeOffsetManagerInterface;
import com.facebook.react.viewmanagers.RNSVGFilterManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGFilterManagerInterface;
import com.facebook.react.viewmanagers.RNSVGForeignObjectManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface;
import com.facebook.react.viewmanagers.RNSVGGroupManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGGroupManagerInterface;
import com.facebook.react.viewmanagers.RNSVGImageManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGImageManagerInterface;
import com.facebook.react.viewmanagers.RNSVGLineManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGLineManagerInterface;
import com.facebook.react.viewmanagers.RNSVGLinearGradientManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface;
import com.facebook.react.viewmanagers.RNSVGMarkerManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface;
import com.facebook.react.viewmanagers.RNSVGMaskManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGMaskManagerInterface;
import com.facebook.react.viewmanagers.RNSVGPathManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGPathManagerInterface;
import com.facebook.react.viewmanagers.RNSVGPatternManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGPatternManagerInterface;
import com.facebook.react.viewmanagers.RNSVGRadialGradientManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface;
import com.facebook.react.viewmanagers.RNSVGRectManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGRectManagerInterface;
import com.facebook.react.viewmanagers.RNSVGSymbolManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface;
import com.facebook.react.viewmanagers.RNSVGTSpanManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface;
import com.facebook.react.viewmanagers.RNSVGTextManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGTextManagerInterface;
import com.facebook.react.viewmanagers.RNSVGTextPathManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface;
import com.facebook.react.viewmanagers.RNSVGUseManagerDelegate;
import com.facebook.react.viewmanagers.RNSVGUseManagerInterface;
import com.facebook.react.views.imagehelper.ResourceDrawableIdHelper;
import com.horcrux.svg.RenderableView;
import com.horcrux.svg.VirtualViewManager;
import com.horcrux.svg.events.SvgLoadEvent;
import com.horcrux.svg.events.SvgOnLayoutEvent;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.regex.Matcher;

/* loaded from: classes3.dex */
class RenderableViewManager<T extends RenderableView> extends VirtualViewManager<T> {

    public static class CircleViewManager extends RenderableViewManager<b> implements RNSVGCircleManagerInterface<b> {
        public static final String REACT_CLASS = "RNSVGCircle";

        public CircleViewManager() {
            super(VirtualViewManager.SVGClass.RNSVGCircle);
            ((VirtualViewManager) this).mDelegate = new RNSVGCircleManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(b bVar, String str) {
            super.setClipPath((CircleViewManager) bVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(b bVar, int i5) {
            super.setClipRule((CircleViewManager) bVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(b bVar, Integer num) {
            super.setColor((CircleViewManager) bVar, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(b bVar, String str) {
            super.setDisplay((CircleViewManager) bVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(b bVar, Dynamic dynamic) {
            super.setFill((CircleViewManager) bVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(b bVar, float f2) {
            super.setFillOpacity((CircleViewManager) bVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(b bVar, int i5) {
            super.setFillRule((CircleViewManager) bVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(b bVar, String str) {
            super.setFilter((CircleViewManager) bVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(b bVar, String str) {
            super.setMarkerEnd((CircleViewManager) bVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(b bVar, String str) {
            super.setMarkerMid((CircleViewManager) bVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(b bVar, String str) {
            super.setMarkerStart((CircleViewManager) bVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(b bVar, String str) {
            super.setMask((CircleViewManager) bVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(b bVar, ReadableArray readableArray) {
            super.setMatrix((CircleViewManager) bVar, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(b bVar, String str) {
            super.setName((CircleViewManager) bVar, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((CircleViewManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(b bVar, String str) {
            super.setPointerEvents((CircleViewManager) bVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(b bVar, ReadableArray readableArray) {
            super.setPropList((CircleViewManager) bVar, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(b bVar, boolean z5) {
            super.setResponsible((CircleViewManager) bVar, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(b bVar, Dynamic dynamic) {
            super.setStroke((CircleViewManager) bVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(b bVar, Dynamic dynamic) {
            super.setStrokeDasharray((CircleViewManager) bVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(b bVar, float f2) {
            super.setStrokeDashoffset((CircleViewManager) bVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(b bVar, int i5) {
            super.setStrokeLinecap((CircleViewManager) bVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(b bVar, int i5) {
            super.setStrokeLinejoin((CircleViewManager) bVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(b bVar, float f2) {
            super.setStrokeMiterlimit((CircleViewManager) bVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(b bVar, float f2) {
            super.setStrokeOpacity((CircleViewManager) bVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(b bVar, Dynamic dynamic) {
            super.setStrokeWidth((CircleViewManager) bVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(b bVar, int i5) {
            super.setVectorEffect((CircleViewManager) bVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "cx")
        public void setCx(b bVar, Dynamic dynamic) {
            bVar.getClass();
            bVar.f6309d = r0.b(dynamic);
            bVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "cy")
        public void setCy(b bVar, Dynamic dynamic) {
            bVar.getClass();
            bVar.f6310e = r0.b(dynamic);
            bVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGCircleManagerInterface
        @ReactProp(name = "r")
        public void setR(b bVar, Dynamic dynamic) {
            bVar.getClass();
            bVar.f6311i = r0.b(dynamic);
            bVar.invalidate();
        }
    }

    public static class ClipPathViewManager extends GroupViewManagerAbstract<c> implements RNSVGClipPathManagerInterface<c> {
        public static final String REACT_CLASS = "RNSVGClipPath";

        public ClipPathViewManager() {
            super(VirtualViewManager.SVGClass.RNSVGClipPath);
            ((VirtualViewManager) this).mDelegate = new RNSVGClipPathManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(c cVar, String str) {
            super.setClipPath((ClipPathViewManager) cVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(c cVar, int i5) {
            super.setClipRule((ClipPathViewManager) cVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(c cVar, Integer num) {
            super.setColor((ClipPathViewManager) cVar, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(c cVar, String str) {
            super.setDisplay((ClipPathViewManager) cVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(c cVar, Dynamic dynamic) {
            super.setFill((ClipPathViewManager) cVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(c cVar, float f2) {
            super.setFillOpacity((ClipPathViewManager) cVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(c cVar, int i5) {
            super.setFillRule((ClipPathViewManager) cVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(c cVar, String str) {
            super.setFilter((ClipPathViewManager) cVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = "font")
        public /* bridge */ /* synthetic */ void setFont(c cVar, Dynamic dynamic) {
            super.setFont((ClipPathViewManager) cVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = ViewProps.FONT_SIZE)
        public /* bridge */ /* synthetic */ void setFontSize(c cVar, Dynamic dynamic) {
            super.setFontSize((ClipPathViewManager) cVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = ViewProps.FONT_WEIGHT)
        public /* bridge */ /* synthetic */ void setFontWeight(c cVar, Dynamic dynamic) {
            super.setFontWeight((ClipPathViewManager) cVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(c cVar, String str) {
            super.setMarkerEnd((ClipPathViewManager) cVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(c cVar, String str) {
            super.setMarkerMid((ClipPathViewManager) cVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(c cVar, String str) {
            super.setMarkerStart((ClipPathViewManager) cVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(c cVar, String str) {
            super.setMask((ClipPathViewManager) cVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(c cVar, ReadableArray readableArray) {
            super.setMatrix((ClipPathViewManager) cVar, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(c cVar, String str) {
            super.setName((ClipPathViewManager) cVar, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((ClipPathViewManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(c cVar, String str) {
            super.setPointerEvents((ClipPathViewManager) cVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(c cVar, ReadableArray readableArray) {
            super.setPropList((ClipPathViewManager) cVar, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(c cVar, boolean z5) {
            super.setResponsible((ClipPathViewManager) cVar, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(c cVar, Dynamic dynamic) {
            super.setStroke((ClipPathViewManager) cVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(c cVar, Dynamic dynamic) {
            super.setStrokeDasharray((ClipPathViewManager) cVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(c cVar, float f2) {
            super.setStrokeDashoffset((ClipPathViewManager) cVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(c cVar, int i5) {
            super.setStrokeLinecap((ClipPathViewManager) cVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(c cVar, int i5) {
            super.setStrokeLinejoin((ClipPathViewManager) cVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(c cVar, float f2) {
            super.setStrokeMiterlimit((ClipPathViewManager) cVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(c cVar, float f2) {
            super.setStrokeOpacity((ClipPathViewManager) cVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(c cVar, Dynamic dynamic) {
            super.setStrokeWidth((ClipPathViewManager) cVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGClipPathManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(c cVar, int i5) {
            super.setVectorEffect((ClipPathViewManager) cVar, i5);
        }
    }

    public static class DefsViewManager extends VirtualViewManager<f> implements RNSVGDefsManagerInterface<f> {
        public static final String REACT_CLASS = "RNSVGDefs";

        public DefsViewManager() {
            super(VirtualViewManager.SVGClass.RNSVGDefs);
            ((VirtualViewManager) this).mDelegate = new RNSVGDefsManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGDefsManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(f fVar, String str) {
            super.setClipPath((DefsViewManager) fVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGDefsManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(f fVar, int i5) {
            super.setClipRule((DefsViewManager) fVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGDefsManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(f fVar, String str) {
            super.setDisplay((DefsViewManager) fVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGDefsManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(f fVar, String str) {
            super.setMarkerEnd((DefsViewManager) fVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGDefsManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(f fVar, String str) {
            super.setMarkerMid((DefsViewManager) fVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGDefsManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(f fVar, String str) {
            super.setMarkerStart((DefsViewManager) fVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGDefsManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(f fVar, String str) {
            super.setMask((DefsViewManager) fVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGDefsManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(f fVar, ReadableArray readableArray) {
            super.setMatrix((DefsViewManager) fVar, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGDefsManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(f fVar, String str) {
            super.setName((DefsViewManager) fVar, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((DefsViewManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGDefsManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(f fVar, String str) {
            super.setPointerEvents((DefsViewManager) fVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGDefsManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(f fVar, boolean z5) {
            super.setResponsible((DefsViewManager) fVar, z5);
        }
    }

    public static class EllipseViewManager extends RenderableViewManager<g> implements RNSVGEllipseManagerInterface<g> {
        public static final String REACT_CLASS = "RNSVGEllipse";

        public EllipseViewManager() {
            super(VirtualViewManager.SVGClass.RNSVGEllipse);
            ((VirtualViewManager) this).mDelegate = new RNSVGEllipseManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(g gVar, String str) {
            super.setClipPath((EllipseViewManager) gVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(g gVar, int i5) {
            super.setClipRule((EllipseViewManager) gVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(g gVar, Integer num) {
            super.setColor((EllipseViewManager) gVar, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(g gVar, String str) {
            super.setDisplay((EllipseViewManager) gVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(g gVar, Dynamic dynamic) {
            super.setFill((EllipseViewManager) gVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(g gVar, float f2) {
            super.setFillOpacity((EllipseViewManager) gVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(g gVar, int i5) {
            super.setFillRule((EllipseViewManager) gVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(g gVar, String str) {
            super.setFilter((EllipseViewManager) gVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(g gVar, String str) {
            super.setMarkerEnd((EllipseViewManager) gVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(g gVar, String str) {
            super.setMarkerMid((EllipseViewManager) gVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(g gVar, String str) {
            super.setMarkerStart((EllipseViewManager) gVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(g gVar, String str) {
            super.setMask((EllipseViewManager) gVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(g gVar, ReadableArray readableArray) {
            super.setMatrix((EllipseViewManager) gVar, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(g gVar, String str) {
            super.setName((EllipseViewManager) gVar, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((EllipseViewManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(g gVar, String str) {
            super.setPointerEvents((EllipseViewManager) gVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(g gVar, ReadableArray readableArray) {
            super.setPropList((EllipseViewManager) gVar, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(g gVar, boolean z5) {
            super.setResponsible((EllipseViewManager) gVar, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(g gVar, Dynamic dynamic) {
            super.setStroke((EllipseViewManager) gVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(g gVar, Dynamic dynamic) {
            super.setStrokeDasharray((EllipseViewManager) gVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(g gVar, float f2) {
            super.setStrokeDashoffset((EllipseViewManager) gVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(g gVar, int i5) {
            super.setStrokeLinecap((EllipseViewManager) gVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(g gVar, int i5) {
            super.setStrokeLinejoin((EllipseViewManager) gVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(g gVar, float f2) {
            super.setStrokeMiterlimit((EllipseViewManager) gVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(g gVar, float f2) {
            super.setStrokeOpacity((EllipseViewManager) gVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(g gVar, Dynamic dynamic) {
            super.setStrokeWidth((EllipseViewManager) gVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(g gVar, int i5) {
            super.setVectorEffect((EllipseViewManager) gVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "cx")
        public void setCx(g gVar, Dynamic dynamic) {
            gVar.getClass();
            gVar.f6351d = r0.b(dynamic);
            gVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "cy")
        public void setCy(g gVar, Dynamic dynamic) {
            gVar.getClass();
            gVar.f6352e = r0.b(dynamic);
            gVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "rx")
        public void setRx(g gVar, Dynamic dynamic) {
            gVar.getClass();
            gVar.f6353i = r0.b(dynamic);
            gVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGEllipseManagerInterface
        @ReactProp(name = "ry")
        public void setRy(g gVar, Dynamic dynamic) {
            gVar.getClass();
            gVar.f6354v = r0.b(dynamic);
            gVar.invalidate();
        }
    }

    public static class FeBlendManager extends FilterPrimitiveManager<h> implements RNSVGFeBlendManagerInterface<h> {
        public static final String REACT_CLASS = "RNSVGFeBlend";

        public FeBlendManager() {
            super(VirtualViewManager.SVGClass.RNSVGFeBlend);
            ((VirtualViewManager) this).mDelegate = new RNSVGFeBlendManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeBlendManagerInterface
        @ReactProp(name = "height")
        public /* bridge */ /* synthetic */ void setHeight(h hVar, Dynamic dynamic) {
            super.setHeight((FeBlendManager) hVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeBlendManagerInterface
        @ReactProp(name = "in1")
        public void setIn1(h hVar, String str) {
            hVar.f6362i = str;
            hVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeBlendManagerInterface
        @ReactProp(name = "in2")
        public void setIn2(h hVar, String str) {
            hVar.f6363v = str;
            hVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeBlendManagerInterface
        @ReactProp(name = "result")
        public /* bridge */ /* synthetic */ void setResult(h hVar, String str) {
            super.setResult((FeBlendManager) hVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeBlendManagerInterface
        @ReactProp(name = "width")
        public /* bridge */ /* synthetic */ void setWidth(h hVar, Dynamic dynamic) {
            super.setWidth((FeBlendManager) hVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeBlendManagerInterface
        @ReactProp(name = "x")
        public /* bridge */ /* synthetic */ void setX(h hVar, Dynamic dynamic) {
            super.setX((FeBlendManager) hVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeBlendManagerInterface
        @ReactProp(name = "y")
        public /* bridge */ /* synthetic */ void setY(h hVar, Dynamic dynamic) {
            super.setY((FeBlendManager) hVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeBlendManagerInterface
        @ReactProp(name = "mode")
        public void setMode(h hVar, String str) {
            hVar.getClass();
            HashMap hashMap = q.f6416i;
            if (!hashMap.containsKey(str)) {
                throw new IllegalArgumentException(a3.e.k("Unknown String Value: ", str));
            }
            hVar.f6364w = (q) hashMap.get(str);
            hVar.invalidate();
        }
    }

    public static class FeColorMatrixManager extends FilterPrimitiveManager<i> implements RNSVGFeColorMatrixManagerInterface<i> {
        public static final String REACT_CLASS = "RNSVGFeColorMatrix";

        public FeColorMatrixManager() {
            super(VirtualViewManager.SVGClass.RNSVGFeColorMatrix);
            ((VirtualViewManager) this).mDelegate = new RNSVGFeColorMatrixManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeColorMatrixManagerInterface
        @ReactProp(name = "height")
        public /* bridge */ /* synthetic */ void setHeight(i iVar, Dynamic dynamic) {
            super.setHeight((FeColorMatrixManager) iVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeColorMatrixManagerInterface
        @ReactProp(name = "in1")
        public void setIn1(i iVar, String str) {
            iVar.f6366i = str;
            iVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeColorMatrixManagerInterface
        @ReactProp(name = "result")
        public /* bridge */ /* synthetic */ void setResult(i iVar, String str) {
            super.setResult((FeColorMatrixManager) iVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeColorMatrixManagerInterface
        @ReactProp(name = "values")
        public void setValues(i iVar, ReadableArray readableArray) {
            iVar.f6368w = readableArray;
            iVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeColorMatrixManagerInterface
        @ReactProp(name = "width")
        public /* bridge */ /* synthetic */ void setWidth(i iVar, Dynamic dynamic) {
            super.setWidth((FeColorMatrixManager) iVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeColorMatrixManagerInterface
        @ReactProp(name = "x")
        public /* bridge */ /* synthetic */ void setX(i iVar, Dynamic dynamic) {
            super.setX((FeColorMatrixManager) iVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeColorMatrixManagerInterface
        @ReactProp(name = "y")
        public /* bridge */ /* synthetic */ void setY(i iVar, Dynamic dynamic) {
            super.setY((FeColorMatrixManager) iVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeColorMatrixManagerInterface
        @ReactProp(name = "type")
        public void setType(i iVar, String str) {
            iVar.getClass();
            HashMap hashMap = s.f6420e;
            if (!hashMap.containsKey(str)) {
                throw new IllegalArgumentException(a3.e.k("Unknown String Value: ", str));
            }
            iVar.f6367v = (s) hashMap.get(str);
            iVar.invalidate();
        }
    }

    public static class FeCompositeManager extends FilterPrimitiveManager<j> implements RNSVGFeCompositeManagerInterface<j> {
        public static final String REACT_CLASS = "RNSVGFeComposite";

        public FeCompositeManager() {
            super(VirtualViewManager.SVGClass.RNSVGFeComposite);
            ((VirtualViewManager) this).mDelegate = new RNSVGFeCompositeManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeCompositeManagerInterface
        @ReactProp(name = "height")
        public /* bridge */ /* synthetic */ void setHeight(j jVar, Dynamic dynamic) {
            super.setHeight((FeCompositeManager) jVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeCompositeManagerInterface
        @ReactProp(name = "in1")
        public void setIn1(j jVar, String str) {
            jVar.f6371i = str;
            jVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeCompositeManagerInterface
        @ReactProp(name = "in2")
        public void setIn2(j jVar, String str) {
            jVar.f6372v = str;
            jVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeCompositeManagerInterface
        @ReactProp(name = "result")
        public /* bridge */ /* synthetic */ void setResult(j jVar, String str) {
            super.setResult((FeCompositeManager) jVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeCompositeManagerInterface
        @ReactProp(name = "width")
        public /* bridge */ /* synthetic */ void setWidth(j jVar, Dynamic dynamic) {
            super.setWidth((FeCompositeManager) jVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeCompositeManagerInterface
        @ReactProp(name = "x")
        public /* bridge */ /* synthetic */ void setX(j jVar, Dynamic dynamic) {
            super.setX((FeCompositeManager) jVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeCompositeManagerInterface
        @ReactProp(name = "y")
        public /* bridge */ /* synthetic */ void setY(j jVar, Dynamic dynamic) {
            super.setY((FeCompositeManager) jVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeCompositeManagerInterface
        @ReactProp(name = "k1")
        public void setK1(j jVar, float f2) {
            jVar.getClass();
            jVar.f6373w = f2;
            jVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeCompositeManagerInterface
        @ReactProp(name = "k2")
        public void setK2(j jVar, float f2) {
            jVar.getClass();
            jVar.f6374x = f2;
            jVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeCompositeManagerInterface
        @ReactProp(name = "k3")
        public void setK3(j jVar, float f2) {
            jVar.getClass();
            jVar.f6375y = f2;
            jVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeCompositeManagerInterface
        @ReactProp(name = "k4")
        public void setK4(j jVar, float f2) {
            jVar.getClass();
            jVar.E = f2;
            jVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeCompositeManagerInterface
        @ReactProp(name = "operator1")
        public void setOperator1(j jVar, String str) {
            jVar.getClass();
            HashMap hashMap = t.f6424i;
            if (!hashMap.containsKey(str)) {
                throw new IllegalArgumentException(a3.e.k("Unknown String Value: ", str));
            }
            jVar.F = (t) hashMap.get(str);
            jVar.invalidate();
        }
    }

    public static class FeFloodManager extends FilterPrimitiveManager<k> implements RNSVGFeFloodManagerInterface<k> {
        public static final String REACT_CLASS = "RNSVGFeFlood";

        public FeFloodManager() {
            super(VirtualViewManager.SVGClass.RNSVGFeFlood);
            ((VirtualViewManager) this).mDelegate = new RNSVGFeFloodManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeFloodManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "floodOpacity")
        public void setFloodOpacity(k kVar, float f2) {
            kVar.f6380v = f2;
            kVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeFloodManagerInterface
        @ReactProp(name = "height")
        public /* bridge */ /* synthetic */ void setHeight(k kVar, Dynamic dynamic) {
            super.setHeight((FeFloodManager) kVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeFloodManagerInterface
        @ReactProp(name = "result")
        public /* bridge */ /* synthetic */ void setResult(k kVar, String str) {
            super.setResult((FeFloodManager) kVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeFloodManagerInterface
        @ReactProp(name = "width")
        public /* bridge */ /* synthetic */ void setWidth(k kVar, Dynamic dynamic) {
            super.setWidth((FeFloodManager) kVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeFloodManagerInterface
        @ReactProp(name = "x")
        public /* bridge */ /* synthetic */ void setX(k kVar, Dynamic dynamic) {
            super.setX((FeFloodManager) kVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeFloodManagerInterface
        @ReactProp(name = "y")
        public /* bridge */ /* synthetic */ void setY(k kVar, Dynamic dynamic) {
            super.setY((FeFloodManager) kVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeFloodManagerInterface
        @ReactProp(name = "floodColor")
        public void setFloodColor(k kVar, Dynamic dynamic) {
            if (dynamic != null) {
                kVar.getClass();
                if (!dynamic.isNull()) {
                    if (dynamic.getType().equals(ReadableType.Map)) {
                        kVar.e(dynamic.asMap());
                        return;
                    }
                    ReadableType type = dynamic.getType();
                    int i5 = 0;
                    if (type.equals(ReadableType.Number)) {
                        kVar.f6379i = JavaOnlyArray.of(0, Integer.valueOf(dynamic.asInt()));
                    } else if (type.equals(ReadableType.Array)) {
                        kVar.f6379i = dynamic.asArray();
                    } else {
                        JavaOnlyArray javaOnlyArray = new JavaOnlyArray();
                        javaOnlyArray.pushInt(0);
                        Matcher matcher = k.f6378w.matcher(dynamic.asString());
                        while (matcher.find()) {
                            double parseDouble = Double.parseDouble(matcher.group());
                            int i6 = i5 + 1;
                            if (i5 < 3) {
                                parseDouble /= 255.0d;
                            }
                            javaOnlyArray.pushDouble(parseDouble);
                            i5 = i6;
                        }
                        kVar.f6379i = javaOnlyArray;
                    }
                    kVar.invalidate();
                    return;
                }
            }
            kVar.f6379i = null;
            kVar.invalidate();
        }

        public void setFloodColor(k kVar, ReadableMap readableMap) {
            kVar.e(readableMap);
        }
    }

    public static class FeGaussianBlurManager extends FilterPrimitiveManager<l> implements RNSVGFeGaussianBlurManagerInterface<l> {
        public static final String REACT_CLASS = "RNSVGFeGaussianBlur";

        public FeGaussianBlurManager() {
            super(VirtualViewManager.SVGClass.RNSVGFeGaussianBlur);
            ((VirtualViewManager) this).mDelegate = new RNSVGFeGaussianBlurManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeGaussianBlurManagerInterface
        @ReactProp(name = "height")
        public /* bridge */ /* synthetic */ void setHeight(l lVar, Dynamic dynamic) {
            super.setHeight((FeGaussianBlurManager) lVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeGaussianBlurManagerInterface
        @ReactProp(name = "in1")
        public void setIn1(l lVar, String str) {
            lVar.f6382i = str;
            lVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeGaussianBlurManagerInterface
        @ReactProp(name = "result")
        public /* bridge */ /* synthetic */ void setResult(l lVar, String str) {
            super.setResult((FeGaussianBlurManager) lVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeGaussianBlurManagerInterface
        @ReactProp(name = "stdDeviationX")
        public void setStdDeviationX(l lVar, float f2) {
            lVar.f6383v = f2;
            lVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeGaussianBlurManagerInterface
        @ReactProp(name = "stdDeviationY")
        public void setStdDeviationY(l lVar, float f2) {
            lVar.f6384w = f2;
            lVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeGaussianBlurManagerInterface
        @ReactProp(name = "width")
        public /* bridge */ /* synthetic */ void setWidth(l lVar, Dynamic dynamic) {
            super.setWidth((FeGaussianBlurManager) lVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeGaussianBlurManagerInterface
        @ReactProp(name = "x")
        public /* bridge */ /* synthetic */ void setX(l lVar, Dynamic dynamic) {
            super.setX((FeGaussianBlurManager) lVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeGaussianBlurManagerInterface
        @ReactProp(name = "y")
        public /* bridge */ /* synthetic */ void setY(l lVar, Dynamic dynamic) {
            super.setY((FeGaussianBlurManager) lVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeGaussianBlurManagerInterface
        @ReactProp(name = "values")
        public void setEdgeMode(l lVar, String str) {
            lVar.getClass();
            HashMap hashMap = p.f6412e;
            if (!hashMap.containsKey(str)) {
                throw new IllegalArgumentException(a3.e.k("Unknown 'edgeMode' Value: ", str));
            }
            lVar.invalidate();
        }
    }

    public static class FeMergeManager extends FilterPrimitiveManager<m> implements RNSVGFeMergeManagerInterface<m> {
        public static final String REACT_CLASS = "RNSVGFeMerge";

        public FeMergeManager() {
            super(VirtualViewManager.SVGClass.RNSVGFeMerge);
            ((VirtualViewManager) this).mDelegate = new RNSVGFeMergeManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeMergeManagerInterface
        @ReactProp(name = "height")
        public /* bridge */ /* synthetic */ void setHeight(m mVar, Dynamic dynamic) {
            super.setHeight((FeMergeManager) mVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeMergeManagerInterface
        @ReactProp(name = "nodes")
        public void setNodes(m mVar, ReadableArray readableArray) {
            mVar.f6385i = readableArray;
            mVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeMergeManagerInterface
        @ReactProp(name = "result")
        public /* bridge */ /* synthetic */ void setResult(m mVar, String str) {
            super.setResult((FeMergeManager) mVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeMergeManagerInterface
        @ReactProp(name = "width")
        public /* bridge */ /* synthetic */ void setWidth(m mVar, Dynamic dynamic) {
            super.setWidth((FeMergeManager) mVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeMergeManagerInterface
        @ReactProp(name = "x")
        public /* bridge */ /* synthetic */ void setX(m mVar, Dynamic dynamic) {
            super.setX((FeMergeManager) mVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeMergeManagerInterface
        @ReactProp(name = "y")
        public /* bridge */ /* synthetic */ void setY(m mVar, Dynamic dynamic) {
            super.setY((FeMergeManager) mVar, dynamic);
        }
    }

    public static class FeOffsetManager extends FilterPrimitiveManager<n> implements RNSVGFeOffsetManagerInterface<n> {
        public static final String REACT_CLASS = "RNSVGFeOffset";

        public FeOffsetManager() {
            super(VirtualViewManager.SVGClass.RNSVGFeOffset);
            ((VirtualViewManager) this).mDelegate = new RNSVGFeOffsetManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeOffsetManagerInterface
        @ReactProp(name = "height")
        public /* bridge */ /* synthetic */ void setHeight(n nVar, Dynamic dynamic) {
            super.setHeight((FeOffsetManager) nVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeOffsetManagerInterface
        @ReactProp(name = "in1")
        public void setIn1(n nVar, String str) {
            nVar.f6394i = str;
            nVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeOffsetManagerInterface
        @ReactProp(name = "result")
        public /* bridge */ /* synthetic */ void setResult(n nVar, String str) {
            super.setResult((FeOffsetManager) nVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeOffsetManagerInterface
        @ReactProp(name = "width")
        public /* bridge */ /* synthetic */ void setWidth(n nVar, Dynamic dynamic) {
            super.setWidth((FeOffsetManager) nVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeOffsetManagerInterface
        @ReactProp(name = "x")
        public /* bridge */ /* synthetic */ void setX(n nVar, Dynamic dynamic) {
            super.setX((FeOffsetManager) nVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeOffsetManagerInterface
        @ReactProp(name = "y")
        public /* bridge */ /* synthetic */ void setY(n nVar, Dynamic dynamic) {
            super.setY((FeOffsetManager) nVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeOffsetManagerInterface
        @ReactProp(name = "dx")
        public void setDx(n nVar, Dynamic dynamic) {
            nVar.getClass();
            nVar.f6395v = r0.b(dynamic);
            nVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFeOffsetManagerInterface
        @ReactProp(name = "dy")
        public void setDy(n nVar, Dynamic dynamic) {
            nVar.getClass();
            nVar.f6396w = r0.b(dynamic);
            nVar.invalidate();
        }
    }

    public static class FilterManager extends VirtualViewManager<v> implements RNSVGFilterManagerInterface<v> {
        public static final String REACT_CLASS = "RNSVGFilter";

        public FilterManager() {
            super(VirtualViewManager.SVGClass.RNSVGFilter);
            ((VirtualViewManager) this).mDelegate = new RNSVGFilterManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFilterManagerInterface
        @ReactProp(name = "height")
        public void setHeight(v vVar, Dynamic dynamic) {
            vVar.f6435v.setHeight(dynamic);
            vVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFilterManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(v vVar, String str) {
            super.setName((FilterManager) vVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFilterManagerInterface
        @ReactProp(name = "width")
        public void setWidth(v vVar, Dynamic dynamic) {
            vVar.f6435v.setWidth(dynamic);
            vVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFilterManagerInterface
        @ReactProp(name = "x")
        public void setX(v vVar, Dynamic dynamic) {
            vVar.f6435v.setX(dynamic);
            vVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFilterManagerInterface
        @ReactProp(name = "y")
        public void setY(v vVar, Dynamic dynamic) {
            vVar.f6435v.setY(dynamic);
            vVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFilterManagerInterface
        @ReactProp(name = "filterUnits")
        public void setFilterUnits(v vVar, String str) {
            vVar.getClass();
            vVar.f6433e = u.a(str);
            vVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGFilterManagerInterface
        @ReactProp(name = "primitiveUnits")
        public void setPrimitiveUnits(v vVar, String str) {
            vVar.getClass();
            vVar.f6434i = u.a(str);
            vVar.invalidate();
        }
    }

    public static class FilterPrimitiveManager<T extends o> extends VirtualViewManager<T> {
        public FilterPrimitiveManager(VirtualViewManager.SVGClass sVGClass) {
            super(sVGClass);
        }

        @ReactProp(name = "height")
        public void setHeight(T t5, Dynamic dynamic) {
            t5.f6405e.setHeight(dynamic);
            t5.invalidate();
        }

        @ReactProp(name = "result")
        public void setResult(T t5, String str) {
            t5.f6404d = str;
            t5.invalidate();
        }

        @ReactProp(name = "width")
        public void setWidth(T t5, Dynamic dynamic) {
            t5.f6405e.setWidth(dynamic);
            t5.invalidate();
        }

        @ReactProp(name = "x")
        public void setX(T t5, Dynamic dynamic) {
            t5.f6405e.setX(dynamic);
            t5.invalidate();
        }

        @ReactProp(name = "y")
        public void setY(T t5, Dynamic dynamic) {
            t5.f6405e.setY(dynamic);
            t5.invalidate();
        }
    }

    public static class ForeignObjectManager extends GroupViewManagerAbstract<y> implements RNSVGForeignObjectManagerInterface<y> {
        public static final String REACT_CLASS = "RNSVGForeignObject";

        public ForeignObjectManager() {
            super(VirtualViewManager.SVGClass.RNSVGForeignObject);
            ((VirtualViewManager) this).mDelegate = new RNSVGForeignObjectManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(y yVar, String str) {
            super.setClipPath((ForeignObjectManager) yVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(y yVar, int i5) {
            super.setClipRule((ForeignObjectManager) yVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(y yVar, Integer num) {
            super.setColor((ForeignObjectManager) yVar, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(y yVar, String str) {
            super.setDisplay((ForeignObjectManager) yVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(y yVar, Dynamic dynamic) {
            super.setFill((ForeignObjectManager) yVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(y yVar, float f2) {
            super.setFillOpacity((ForeignObjectManager) yVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(y yVar, int i5) {
            super.setFillRule((ForeignObjectManager) yVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(y yVar, String str) {
            super.setFilter((ForeignObjectManager) yVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "font")
        public /* bridge */ /* synthetic */ void setFont(y yVar, Dynamic dynamic) {
            super.setFont((ForeignObjectManager) yVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = ViewProps.FONT_SIZE)
        public /* bridge */ /* synthetic */ void setFontSize(y yVar, Dynamic dynamic) {
            super.setFontSize((ForeignObjectManager) yVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = ViewProps.FONT_WEIGHT)
        public /* bridge */ /* synthetic */ void setFontWeight(y yVar, Dynamic dynamic) {
            super.setFontWeight((ForeignObjectManager) yVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(y yVar, String str) {
            super.setMarkerEnd((ForeignObjectManager) yVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(y yVar, String str) {
            super.setMarkerMid((ForeignObjectManager) yVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(y yVar, String str) {
            super.setMarkerStart((ForeignObjectManager) yVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(y yVar, String str) {
            super.setMask((ForeignObjectManager) yVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(y yVar, ReadableArray readableArray) {
            super.setMatrix((ForeignObjectManager) yVar, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(y yVar, String str) {
            super.setName((ForeignObjectManager) yVar, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((ForeignObjectManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(y yVar, String str) {
            super.setPointerEvents((ForeignObjectManager) yVar, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(y yVar, ReadableArray readableArray) {
            super.setPropList((ForeignObjectManager) yVar, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(y yVar, boolean z5) {
            super.setResponsible((ForeignObjectManager) yVar, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(y yVar, Dynamic dynamic) {
            super.setStroke((ForeignObjectManager) yVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(y yVar, Dynamic dynamic) {
            super.setStrokeDasharray((ForeignObjectManager) yVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(y yVar, float f2) {
            super.setStrokeDashoffset((ForeignObjectManager) yVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(y yVar, int i5) {
            super.setStrokeLinecap((ForeignObjectManager) yVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(y yVar, int i5) {
            super.setStrokeLinejoin((ForeignObjectManager) yVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(y yVar, float f2) {
            super.setStrokeMiterlimit((ForeignObjectManager) yVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(y yVar, float f2) {
            super.setStrokeOpacity((ForeignObjectManager) yVar, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(y yVar, Dynamic dynamic) {
            super.setStrokeWidth((ForeignObjectManager) yVar, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(y yVar, int i5) {
            super.setVectorEffect((ForeignObjectManager) yVar, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "height")
        public void setHeight(y yVar, Dynamic dynamic) {
            yVar.getClass();
            yVar.F = r0.b(dynamic);
            yVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "width")
        public void setWidth(y yVar, Dynamic dynamic) {
            yVar.getClass();
            yVar.E = r0.b(dynamic);
            yVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "x")
        public void setX(y yVar, Dynamic dynamic) {
            yVar.getClass();
            yVar.f6452x = r0.b(dynamic);
            yVar.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGForeignObjectManagerInterface
        @ReactProp(name = "y")
        public void setY(y yVar, Dynamic dynamic) {
            yVar.getClass();
            yVar.f6453y = r0.b(dynamic);
            yVar.invalidate();
        }
    }

    public static class GroupViewManager extends GroupViewManagerAbstract<a0> implements RNSVGGroupManagerInterface<a0> {
        public static final String REACT_CLASS = "RNSVGGroup";

        public GroupViewManager() {
            super(VirtualViewManager.SVGClass.RNSVGGroup);
            ((VirtualViewManager) this).mDelegate = new RNSVGGroupManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(a0 a0Var, String str) {
            super.setClipPath((GroupViewManager) a0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(a0 a0Var, int i5) {
            super.setClipRule((GroupViewManager) a0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(a0 a0Var, Integer num) {
            super.setColor((GroupViewManager) a0Var, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(a0 a0Var, String str) {
            super.setDisplay((GroupViewManager) a0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(a0 a0Var, Dynamic dynamic) {
            super.setFill((GroupViewManager) a0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(a0 a0Var, float f2) {
            super.setFillOpacity((GroupViewManager) a0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(a0 a0Var, int i5) {
            super.setFillRule((GroupViewManager) a0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(a0 a0Var, String str) {
            super.setFilter((GroupViewManager) a0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = "font")
        public /* bridge */ /* synthetic */ void setFont(a0 a0Var, Dynamic dynamic) {
            super.setFont((GroupViewManager) a0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = ViewProps.FONT_SIZE)
        public /* bridge */ /* synthetic */ void setFontSize(a0 a0Var, Dynamic dynamic) {
            super.setFontSize((GroupViewManager) a0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = ViewProps.FONT_WEIGHT)
        public /* bridge */ /* synthetic */ void setFontWeight(a0 a0Var, Dynamic dynamic) {
            super.setFontWeight((GroupViewManager) a0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(a0 a0Var, String str) {
            super.setMarkerEnd((GroupViewManager) a0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(a0 a0Var, String str) {
            super.setMarkerMid((GroupViewManager) a0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(a0 a0Var, String str) {
            super.setMarkerStart((GroupViewManager) a0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(a0 a0Var, String str) {
            super.setMask((GroupViewManager) a0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(a0 a0Var, ReadableArray readableArray) {
            super.setMatrix((GroupViewManager) a0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(a0 a0Var, String str) {
            super.setName((GroupViewManager) a0Var, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((GroupViewManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(a0 a0Var, String str) {
            super.setPointerEvents((GroupViewManager) a0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(a0 a0Var, ReadableArray readableArray) {
            super.setPropList((GroupViewManager) a0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(a0 a0Var, boolean z5) {
            super.setResponsible((GroupViewManager) a0Var, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(a0 a0Var, Dynamic dynamic) {
            super.setStroke((GroupViewManager) a0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(a0 a0Var, Dynamic dynamic) {
            super.setStrokeDasharray((GroupViewManager) a0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(a0 a0Var, float f2) {
            super.setStrokeDashoffset((GroupViewManager) a0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(a0 a0Var, int i5) {
            super.setStrokeLinecap((GroupViewManager) a0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(a0 a0Var, int i5) {
            super.setStrokeLinejoin((GroupViewManager) a0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(a0 a0Var, float f2) {
            super.setStrokeMiterlimit((GroupViewManager) a0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(a0 a0Var, float f2) {
            super.setStrokeOpacity((GroupViewManager) a0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(a0 a0Var, Dynamic dynamic) {
            super.setStrokeWidth((GroupViewManager) a0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGGroupManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(a0 a0Var, int i5) {
            super.setVectorEffect((GroupViewManager) a0Var, i5);
        }
    }

    public static class GroupViewManagerAbstract<U extends a0> extends RenderableViewManager<U> {
        public GroupViewManagerAbstract(VirtualViewManager.SVGClass sVGClass) {
            super(sVGClass);
        }

        @ReactProp(name = "font")
        public void setFont(U u5, Dynamic dynamic) {
            u5.getClass();
            if (dynamic.getType() == ReadableType.Map) {
                u5.f6304d = dynamic.asMap();
            } else {
                u5.f6304d = null;
            }
            u5.invalidate();
        }

        @ReactProp(name = ViewProps.FONT_SIZE)
        public void setFontSize(U u5, Dynamic dynamic) {
            JavaOnlyMap javaOnlyMap = new JavaOnlyMap();
            int i5 = p0.a[dynamic.getType().ordinal()];
            if (i5 == 1) {
                javaOnlyMap.putDouble(ViewProps.FONT_SIZE, dynamic.asDouble());
            } else if (i5 != 2) {
                return;
            } else {
                javaOnlyMap.putString(ViewProps.FONT_SIZE, dynamic.asString());
            }
            u5.f6304d = javaOnlyMap;
            u5.invalidate();
        }

        @ReactProp(name = ViewProps.FONT_WEIGHT)
        public void setFontWeight(U u5, Dynamic dynamic) {
            JavaOnlyMap javaOnlyMap = new JavaOnlyMap();
            int i5 = p0.a[dynamic.getType().ordinal()];
            if (i5 == 1) {
                javaOnlyMap.putDouble(ViewProps.FONT_WEIGHT, dynamic.asDouble());
            } else if (i5 != 2) {
                return;
            } else {
                javaOnlyMap.putString(ViewProps.FONT_WEIGHT, dynamic.asString());
            }
            u5.f6304d = javaOnlyMap;
            u5.invalidate();
        }
    }

    public static class ImageViewManager extends RenderableViewManager<c0> implements RNSVGImageManagerInterface<c0> {
        public static final String REACT_CLASS = "RNSVGImage";

        public ImageViewManager() {
            super(VirtualViewManager.SVGClass.RNSVGImage);
            ((VirtualViewManager) this).mDelegate = new RNSVGImageManagerDelegate(this);
        }

        @Override // com.horcrux.svg.RenderableViewManager, com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
        public Map<String, Object> getExportedCustomDirectEventTypeConstants() {
            HashMap hashMap = new HashMap();
            hashMap.put(SvgLoadEvent.EVENT_NAME, MapBuilder.of("registrationName", "onLoad"));
            return hashMap;
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "align")
        public void setAlign(c0 c0Var, String str) {
            c0Var.E = str;
            c0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(c0 c0Var, String str) {
            super.setClipPath((ImageViewManager) c0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(c0 c0Var, int i5) {
            super.setClipRule((ImageViewManager) c0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(c0 c0Var, Integer num) {
            super.setColor((ImageViewManager) c0Var, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(c0 c0Var, String str) {
            super.setDisplay((ImageViewManager) c0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(c0 c0Var, Dynamic dynamic) {
            super.setFill((ImageViewManager) c0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(c0 c0Var, float f2) {
            super.setFillOpacity((ImageViewManager) c0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(c0 c0Var, int i5) {
            super.setFillRule((ImageViewManager) c0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(c0 c0Var, String str) {
            super.setFilter((ImageViewManager) c0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(c0 c0Var, String str) {
            super.setMarkerEnd((ImageViewManager) c0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(c0 c0Var, String str) {
            super.setMarkerMid((ImageViewManager) c0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(c0 c0Var, String str) {
            super.setMarkerStart((ImageViewManager) c0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(c0 c0Var, String str) {
            super.setMask((ImageViewManager) c0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(c0 c0Var, ReadableArray readableArray) {
            super.setMatrix((ImageViewManager) c0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "meetOrSlice")
        public void setMeetOrSlice(c0 c0Var, int i5) {
            c0Var.F = i5;
            c0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(c0 c0Var, String str) {
            super.setName((ImageViewManager) c0Var, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((ImageViewManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(c0 c0Var, String str) {
            super.setPointerEvents((ImageViewManager) c0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(c0 c0Var, ReadableArray readableArray) {
            super.setPropList((ImageViewManager) c0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(c0 c0Var, boolean z5) {
            super.setResponsible((ImageViewManager) c0Var, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(c0 c0Var, Dynamic dynamic) {
            super.setStroke((ImageViewManager) c0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(c0 c0Var, Dynamic dynamic) {
            super.setStrokeDasharray((ImageViewManager) c0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(c0 c0Var, float f2) {
            super.setStrokeDashoffset((ImageViewManager) c0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(c0 c0Var, int i5) {
            super.setStrokeLinecap((ImageViewManager) c0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(c0 c0Var, int i5) {
            super.setStrokeLinejoin((ImageViewManager) c0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(c0 c0Var, float f2) {
            super.setStrokeMiterlimit((ImageViewManager) c0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(c0 c0Var, float f2) {
            super.setStrokeOpacity((ImageViewManager) c0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(c0 c0Var, Dynamic dynamic) {
            super.setStrokeWidth((ImageViewManager) c0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(c0 c0Var, int i5) {
            super.setVectorEffect((ImageViewManager) c0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "height")
        public void setHeight(c0 c0Var, Dynamic dynamic) {
            c0Var.getClass();
            c0Var.f6315v = r0.b(dynamic);
            c0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(customType = "ImageSource", name = "src")
        public void setSrc(c0 c0Var, ReadableMap readableMap) {
            c0Var.getClass();
            if (readableMap != null) {
                String string = readableMap.getString("uri");
                c0Var.f6316w = string;
                if (string == null || string.isEmpty()) {
                    return;
                }
                if (readableMap.hasKey("width") && readableMap.hasKey("height")) {
                    c0Var.f6317x = readableMap.getInt("width");
                    c0Var.f6318y = readableMap.getInt("height");
                } else {
                    c0Var.f6317x = 0;
                    c0Var.f6318y = 0;
                }
                if (Uri.parse(c0Var.f6316w).getScheme() == null) {
                    ResourceDrawableIdHelper.getInstance();
                    ResourceDrawableIdHelper.getResourceDrawableUri(c0Var.mContext, c0Var.f6316w);
                }
            }
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "width")
        public void setWidth(c0 c0Var, Dynamic dynamic) {
            c0Var.getClass();
            c0Var.f6314i = r0.b(dynamic);
            c0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "x")
        public void setX(c0 c0Var, Dynamic dynamic) {
            c0Var.getClass();
            c0Var.f6312d = r0.b(dynamic);
            c0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGImageManagerInterface
        @ReactProp(name = "y")
        public void setY(c0 c0Var, Dynamic dynamic) {
            c0Var.getClass();
            c0Var.f6313e = r0.b(dynamic);
            c0Var.invalidate();
        }
    }

    public static class LineViewManager extends RenderableViewManager<d0> implements RNSVGLineManagerInterface<d0> {
        public static final String REACT_CLASS = "RNSVGLine";

        public LineViewManager() {
            super(VirtualViewManager.SVGClass.RNSVGLine);
            ((VirtualViewManager) this).mDelegate = new RNSVGLineManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(d0 d0Var, String str) {
            super.setClipPath((LineViewManager) d0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(d0 d0Var, int i5) {
            super.setClipRule((LineViewManager) d0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(d0 d0Var, Integer num) {
            super.setColor((LineViewManager) d0Var, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(d0 d0Var, String str) {
            super.setDisplay((LineViewManager) d0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(d0 d0Var, Dynamic dynamic) {
            super.setFill((LineViewManager) d0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(d0 d0Var, float f2) {
            super.setFillOpacity((LineViewManager) d0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(d0 d0Var, int i5) {
            super.setFillRule((LineViewManager) d0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(d0 d0Var, String str) {
            super.setFilter((LineViewManager) d0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(d0 d0Var, String str) {
            super.setMarkerEnd((LineViewManager) d0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(d0 d0Var, String str) {
            super.setMarkerMid((LineViewManager) d0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(d0 d0Var, String str) {
            super.setMarkerStart((LineViewManager) d0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(d0 d0Var, String str) {
            super.setMask((LineViewManager) d0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(d0 d0Var, ReadableArray readableArray) {
            super.setMatrix((LineViewManager) d0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(d0 d0Var, String str) {
            super.setName((LineViewManager) d0Var, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((LineViewManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(d0 d0Var, String str) {
            super.setPointerEvents((LineViewManager) d0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(d0 d0Var, ReadableArray readableArray) {
            super.setPropList((LineViewManager) d0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(d0 d0Var, boolean z5) {
            super.setResponsible((LineViewManager) d0Var, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(d0 d0Var, Dynamic dynamic) {
            super.setStroke((LineViewManager) d0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(d0 d0Var, Dynamic dynamic) {
            super.setStrokeDasharray((LineViewManager) d0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(d0 d0Var, float f2) {
            super.setStrokeDashoffset((LineViewManager) d0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(d0 d0Var, int i5) {
            super.setStrokeLinecap((LineViewManager) d0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(d0 d0Var, int i5) {
            super.setStrokeLinejoin((LineViewManager) d0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(d0 d0Var, float f2) {
            super.setStrokeMiterlimit((LineViewManager) d0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(d0 d0Var, float f2) {
            super.setStrokeOpacity((LineViewManager) d0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(d0 d0Var, Dynamic dynamic) {
            super.setStrokeWidth((LineViewManager) d0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(d0 d0Var, int i5) {
            super.setVectorEffect((LineViewManager) d0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "x1")
        public void setX1(d0 d0Var, Dynamic dynamic) {
            d0Var.getClass();
            d0Var.f6323d = r0.b(dynamic);
            d0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "x2")
        public void setX2(d0 d0Var, Dynamic dynamic) {
            d0Var.getClass();
            d0Var.f6325i = r0.b(dynamic);
            d0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "y1")
        public void setY1(d0 d0Var, Dynamic dynamic) {
            d0Var.getClass();
            d0Var.f6324e = r0.b(dynamic);
            d0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLineManagerInterface
        @ReactProp(name = "y2")
        public void setY2(d0 d0Var, Dynamic dynamic) {
            d0Var.getClass();
            d0Var.f6326v = r0.b(dynamic);
            d0Var.invalidate();
        }
    }

    public static class LinearGradientManager extends VirtualViewManager<e0> implements RNSVGLinearGradientManagerInterface<e0> {
        public static final String REACT_CLASS = "RNSVGLinearGradient";

        public LinearGradientManager() {
            super(VirtualViewManager.SVGClass.RNSVGLinearGradient);
            ((VirtualViewManager) this).mDelegate = new RNSVGLinearGradientManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(e0 e0Var, String str) {
            super.setClipPath((LinearGradientManager) e0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(e0 e0Var, int i5) {
            super.setClipRule((LinearGradientManager) e0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(e0 e0Var, String str) {
            super.setDisplay((LinearGradientManager) e0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = "gradient")
        public void setGradient(e0 e0Var, ReadableArray readableArray) {
            e0Var.f6338w = readableArray;
            e0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = "gradientTransform")
        public void setGradientTransform(e0 e0Var, ReadableArray readableArray) {
            if (readableArray != null) {
                float[] fArr = e0.E;
                int N = e4.f.N(readableArray, fArr, e0Var.mScale);
                if (N == 6) {
                    if (e0Var.f6340y == null) {
                        e0Var.f6340y = new Matrix();
                    }
                    e0Var.f6340y.setValues(fArr);
                } else if (N != -1) {
                    p8.a.v(ReactConstants.TAG, "RNSVG: Transform matrices must be of size 6");
                }
            } else {
                e0Var.f6340y = null;
            }
            e0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = "gradientUnits")
        public void setGradientUnits(e0 e0Var, int i5) {
            if (i5 == 0) {
                e0Var.f6339x = 1;
            } else if (i5 == 1) {
                e0Var.f6339x = 2;
            }
            e0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(e0 e0Var, String str) {
            super.setMarkerEnd((LinearGradientManager) e0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(e0 e0Var, String str) {
            super.setMarkerMid((LinearGradientManager) e0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(e0 e0Var, String str) {
            super.setMarkerStart((LinearGradientManager) e0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(e0 e0Var, String str) {
            super.setMask((LinearGradientManager) e0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(e0 e0Var, ReadableArray readableArray) {
            super.setMatrix((LinearGradientManager) e0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(e0 e0Var, String str) {
            super.setName((LinearGradientManager) e0Var, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((LinearGradientManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(e0 e0Var, String str) {
            super.setPointerEvents((LinearGradientManager) e0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(e0 e0Var, boolean z5) {
            super.setResponsible((LinearGradientManager) e0Var, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = "x1")
        public void setX1(e0 e0Var, Dynamic dynamic) {
            e0Var.getClass();
            e0Var.f6334d = r0.b(dynamic);
            e0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = "x2")
        public void setX2(e0 e0Var, Dynamic dynamic) {
            e0Var.getClass();
            e0Var.f6336i = r0.b(dynamic);
            e0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = "y1")
        public void setY1(e0 e0Var, Dynamic dynamic) {
            e0Var.getClass();
            e0Var.f6335e = r0.b(dynamic);
            e0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGLinearGradientManagerInterface
        @ReactProp(name = "y2")
        public void setY2(e0 e0Var, Dynamic dynamic) {
            e0Var.getClass();
            e0Var.f6337v = r0.b(dynamic);
            e0Var.invalidate();
        }
    }

    public static class MarkerManager extends GroupViewManagerAbstract<f0> implements RNSVGMarkerManagerInterface<f0> {
        public static final String REACT_CLASS = "RNSVGMarker";

        public MarkerManager() {
            super(VirtualViewManager.SVGClass.RNSVGMarker);
            ((VirtualViewManager) this).mDelegate = new RNSVGMarkerManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "align")
        public void setAlign(f0 f0Var, String str) {
            f0Var.M = str;
            f0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(f0 f0Var, String str) {
            super.setClipPath((MarkerManager) f0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(f0 f0Var, int i5) {
            super.setClipRule((MarkerManager) f0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(f0 f0Var, Integer num) {
            super.setColor((MarkerManager) f0Var, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(f0 f0Var, String str) {
            super.setDisplay((MarkerManager) f0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(f0 f0Var, Dynamic dynamic) {
            super.setFill((MarkerManager) f0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(f0 f0Var, float f2) {
            super.setFillOpacity((MarkerManager) f0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(f0 f0Var, int i5) {
            super.setFillRule((MarkerManager) f0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(f0 f0Var, String str) {
            super.setFilter((MarkerManager) f0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "font")
        public /* bridge */ /* synthetic */ void setFont(f0 f0Var, Dynamic dynamic) {
            super.setFont((MarkerManager) f0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = ViewProps.FONT_SIZE)
        public /* bridge */ /* synthetic */ void setFontSize(f0 f0Var, Dynamic dynamic) {
            super.setFontSize((MarkerManager) f0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = ViewProps.FONT_WEIGHT)
        public /* bridge */ /* synthetic */ void setFontWeight(f0 f0Var, Dynamic dynamic) {
            super.setFontWeight((MarkerManager) f0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(f0 f0Var, String str) {
            super.setMarkerEnd((MarkerManager) f0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(f0 f0Var, String str) {
            super.setMarkerMid((MarkerManager) f0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(f0 f0Var, String str) {
            super.setMarkerStart((MarkerManager) f0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "markerUnits")
        public void setMarkerUnits(f0 f0Var, String str) {
            f0Var.G = str;
            f0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(f0 f0Var, String str) {
            super.setMask((MarkerManager) f0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(f0 f0Var, ReadableArray readableArray) {
            super.setMatrix((MarkerManager) f0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "meetOrSlice")
        public void setMeetOrSlice(f0 f0Var, int i5) {
            f0Var.N = i5;
            f0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "minX")
        public void setMinX(f0 f0Var, float f2) {
            f0Var.I = f2;
            f0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "minY")
        public void setMinY(f0 f0Var, float f2) {
            f0Var.J = f2;
            f0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(f0 f0Var, String str) {
            super.setName((MarkerManager) f0Var, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((MarkerManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "orient")
        public void setOrient(f0 f0Var, String str) {
            f0Var.H = str;
            f0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(f0 f0Var, String str) {
            super.setPointerEvents((MarkerManager) f0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(f0 f0Var, ReadableArray readableArray) {
            super.setPropList((MarkerManager) f0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(f0 f0Var, boolean z5) {
            super.setResponsible((MarkerManager) f0Var, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(f0 f0Var, Dynamic dynamic) {
            super.setStroke((MarkerManager) f0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(f0 f0Var, Dynamic dynamic) {
            super.setStrokeDasharray((MarkerManager) f0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(f0 f0Var, float f2) {
            super.setStrokeDashoffset((MarkerManager) f0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(f0 f0Var, int i5) {
            super.setStrokeLinecap((MarkerManager) f0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(f0 f0Var, int i5) {
            super.setStrokeLinejoin((MarkerManager) f0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(f0 f0Var, float f2) {
            super.setStrokeMiterlimit((MarkerManager) f0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(f0 f0Var, float f2) {
            super.setStrokeOpacity((MarkerManager) f0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(f0 f0Var, Dynamic dynamic) {
            super.setStrokeWidth((MarkerManager) f0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "vbHeight")
        public void setVbHeight(f0 f0Var, float f2) {
            f0Var.L = f2;
            f0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "vbWidth")
        public void setVbWidth(f0 f0Var, float f2) {
            f0Var.K = f2;
            f0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(f0 f0Var, int i5) {
            super.setVectorEffect((MarkerManager) f0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "markerHeight")
        public void setMarkerHeight(f0 f0Var, Dynamic dynamic) {
            f0Var.getClass();
            f0Var.F = r0.b(dynamic);
            f0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "markerWidth")
        public void setMarkerWidth(f0 f0Var, Dynamic dynamic) {
            f0Var.getClass();
            f0Var.E = r0.b(dynamic);
            f0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "refX")
        public void setRefX(f0 f0Var, Dynamic dynamic) {
            f0Var.getClass();
            f0Var.f6347x = r0.b(dynamic);
            f0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface
        @ReactProp(name = "refY")
        public void setRefY(f0 f0Var, Dynamic dynamic) {
            f0Var.getClass();
            f0Var.f6348y = r0.b(dynamic);
            f0Var.invalidate();
        }
    }

    public static class MaskManager extends GroupViewManagerAbstract<g0> implements RNSVGMaskManagerInterface<g0> {
        public static final String REACT_CLASS = "RNSVGMask";

        public MaskManager() {
            super(VirtualViewManager.SVGClass.RNSVGMask);
            ((VirtualViewManager) this).mDelegate = new RNSVGMaskManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(g0 g0Var, String str) {
            super.setClipPath((MaskManager) g0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(g0 g0Var, int i5) {
            super.setClipRule((MaskManager) g0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(g0 g0Var, Integer num) {
            super.setColor((MaskManager) g0Var, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(g0 g0Var, String str) {
            super.setDisplay((MaskManager) g0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(g0 g0Var, Dynamic dynamic) {
            super.setFill((MaskManager) g0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(g0 g0Var, float f2) {
            super.setFillOpacity((MaskManager) g0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(g0 g0Var, int i5) {
            super.setFillRule((MaskManager) g0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(g0 g0Var, String str) {
            super.setFilter((MaskManager) g0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "font")
        public /* bridge */ /* synthetic */ void setFont(g0 g0Var, Dynamic dynamic) {
            super.setFont((MaskManager) g0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = ViewProps.FONT_SIZE)
        public /* bridge */ /* synthetic */ void setFontSize(g0 g0Var, Dynamic dynamic) {
            super.setFontSize((MaskManager) g0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = ViewProps.FONT_WEIGHT)
        public /* bridge */ /* synthetic */ void setFontWeight(g0 g0Var, Dynamic dynamic) {
            super.setFontWeight((MaskManager) g0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(g0 g0Var, String str) {
            super.setMarkerEnd((MaskManager) g0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(g0 g0Var, String str) {
            super.setMarkerMid((MaskManager) g0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(g0 g0Var, String str) {
            super.setMarkerStart((MaskManager) g0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(g0 g0Var, String str) {
            super.setMask((MaskManager) g0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "maskContentUnits")
        public void setMaskContentUnits(g0 g0Var, int i5) {
            g0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "maskType")
        public void setMaskType(g0 g0Var, int i5) {
            if (i5 == 0) {
                g0Var.H = 1;
            } else if (i5 == 1) {
                g0Var.H = 2;
            }
            g0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "maskUnits")
        public void setMaskUnits(g0 g0Var, int i5) {
            if (i5 == 0) {
                g0Var.G = 1;
            } else if (i5 == 1) {
                g0Var.G = 2;
            }
            g0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(g0 g0Var, ReadableArray readableArray) {
            super.setMatrix((MaskManager) g0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(g0 g0Var, String str) {
            super.setName((MaskManager) g0Var, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((MaskManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(g0 g0Var, String str) {
            super.setPointerEvents((MaskManager) g0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(g0 g0Var, ReadableArray readableArray) {
            super.setPropList((MaskManager) g0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(g0 g0Var, boolean z5) {
            super.setResponsible((MaskManager) g0Var, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(g0 g0Var, Dynamic dynamic) {
            super.setStroke((MaskManager) g0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(g0 g0Var, Dynamic dynamic) {
            super.setStrokeDasharray((MaskManager) g0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(g0 g0Var, float f2) {
            super.setStrokeDashoffset((MaskManager) g0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(g0 g0Var, int i5) {
            super.setStrokeLinecap((MaskManager) g0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(g0 g0Var, int i5) {
            super.setStrokeLinejoin((MaskManager) g0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(g0 g0Var, float f2) {
            super.setStrokeMiterlimit((MaskManager) g0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(g0 g0Var, float f2) {
            super.setStrokeOpacity((MaskManager) g0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(g0 g0Var, Dynamic dynamic) {
            super.setStrokeWidth((MaskManager) g0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(g0 g0Var, int i5) {
            super.setVectorEffect((MaskManager) g0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "height")
        public void setHeight(g0 g0Var, Dynamic dynamic) {
            g0Var.getClass();
            g0Var.F = r0.b(dynamic);
            g0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "width")
        public void setWidth(g0 g0Var, Dynamic dynamic) {
            g0Var.getClass();
            g0Var.E = r0.b(dynamic);
            g0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "x")
        public void setX(g0 g0Var, Dynamic dynamic) {
            g0Var.getClass();
            g0Var.f6355x = r0.b(dynamic);
            g0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGMaskManagerInterface
        @ReactProp(name = "y")
        public void setY(g0 g0Var, Dynamic dynamic) {
            g0Var.getClass();
            g0Var.f6356y = r0.b(dynamic);
            g0Var.invalidate();
        }
    }

    public static class PathViewManager extends RenderableViewManager<i0> implements RNSVGPathManagerInterface<i0> {
        public static final String REACT_CLASS = "RNSVGPath";

        public PathViewManager() {
            super(VirtualViewManager.SVGClass.RNSVGPath);
            ((VirtualViewManager) this).mDelegate = new RNSVGPathManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(i0 i0Var, String str) {
            super.setClipPath((PathViewManager) i0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(i0 i0Var, int i5) {
            super.setClipRule((PathViewManager) i0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(i0 i0Var, Integer num) {
            super.setColor((PathViewManager) i0Var, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(i0 i0Var, String str) {
            super.setDisplay((PathViewManager) i0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(i0 i0Var, Dynamic dynamic) {
            super.setFill((PathViewManager) i0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(i0 i0Var, float f2) {
            super.setFillOpacity((PathViewManager) i0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(i0 i0Var, int i5) {
            super.setFillRule((PathViewManager) i0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(i0 i0Var, String str) {
            super.setFilter((PathViewManager) i0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(i0 i0Var, String str) {
            super.setMarkerEnd((PathViewManager) i0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(i0 i0Var, String str) {
            super.setMarkerMid((PathViewManager) i0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(i0 i0Var, String str) {
            super.setMarkerStart((PathViewManager) i0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(i0 i0Var, String str) {
            super.setMask((PathViewManager) i0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(i0 i0Var, ReadableArray readableArray) {
            super.setMatrix((PathViewManager) i0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(i0 i0Var, String str) {
            super.setName((PathViewManager) i0Var, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((PathViewManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(i0 i0Var, String str) {
            super.setPointerEvents((PathViewManager) i0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(i0 i0Var, ReadableArray readableArray) {
            super.setPropList((PathViewManager) i0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(i0 i0Var, boolean z5) {
            super.setResponsible((PathViewManager) i0Var, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(i0 i0Var, Dynamic dynamic) {
            super.setStroke((PathViewManager) i0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(i0 i0Var, Dynamic dynamic) {
            super.setStrokeDasharray((PathViewManager) i0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(i0 i0Var, float f2) {
            super.setStrokeDashoffset((PathViewManager) i0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(i0 i0Var, int i5) {
            super.setStrokeLinecap((PathViewManager) i0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(i0 i0Var, int i5) {
            super.setStrokeLinejoin((PathViewManager) i0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(i0 i0Var, float f2) {
            super.setStrokeMiterlimit((PathViewManager) i0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(i0 i0Var, float f2) {
            super.setStrokeOpacity((PathViewManager) i0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(i0 i0Var, Dynamic dynamic) {
            super.setStrokeWidth((PathViewManager) i0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(i0 i0Var, int i5) {
            super.setVectorEffect((PathViewManager) i0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPathManagerInterface
        @ReactProp(name = "d")
        public void setD(i0 i0Var, String str) {
            i0Var.getClass();
            d9.a.f7439i = new ArrayList();
            Path path = new Path();
            d9.a.f7438h = path;
            if (str != null) {
                d9.a.f7436f = str.length();
                d9.a.f7437g = str;
                d9.a.f7435e = 0;
                d9.a.j = 0.0f;
                d9.a.k = 0.0f;
                d9.a.f7440l = 0.0f;
                d9.a.f7441m = 0.0f;
                d9.a.f7442n = 0.0f;
                d9.a.f7443o = 0.0f;
                d9.a.f7444p = false;
                char c6 = ' ';
                while (d9.a.f7435e < d9.a.f7436f) {
                    d9.a.R();
                    int i5 = d9.a.f7435e;
                    if (i5 >= d9.a.f7436f) {
                        path = d9.a.f7438h;
                    } else {
                        boolean z5 = true;
                        boolean z6 = c6 != ' ';
                        char charAt = d9.a.f7437g.charAt(i5);
                        if (!z6 && charAt != 'M' && charAt != 'm') {
                            throw new IllegalArgumentException(String.format("Unexpected character '%c' (i=%d, s=%s)", Character.valueOf(charAt), Integer.valueOf(d9.a.f7435e), d9.a.f7437g));
                        }
                        switch (charAt) {
                            case 'A':
                            case 'C':
                            case 'H':
                            case 'L':
                            case 'M':
                            case 'Q':
                            case 'S':
                            case 'T':
                            case com.swmansion.reanimated.BuildConfig.REACT_NATIVE_MINOR_VERSION /* 86 */:
                            case 'Z':
                            case 'a':
                            case 'c':
                            case 'h':
                            case 'l':
                            case 'm':
                            case 'q':
                            case 's':
                            case 't':
                            case 'v':
                            case 'z':
                                d9.a.f7435e++;
                                z5 = false;
                                c6 = charAt;
                                break;
                            default:
                                if (((charAt < '0' || charAt > '9') && charAt != '.' && charAt != '-' && charAt != '+') || !z6) {
                                    throw new IllegalArgumentException(String.format("Unexpected character '%c' (i=%d, s=%s)", Character.valueOf(charAt), Integer.valueOf(d9.a.f7435e), d9.a.f7437g));
                                }
                                if (c6 != 'Z' && c6 != 'z') {
                                    if (c6 != 'M' && c6 != 'm') {
                                        z5 = false;
                                        break;
                                    } else if (Character.isUpperCase(c6)) {
                                        c6 = 'L';
                                        break;
                                    } else {
                                        c6 = 'l';
                                        break;
                                    }
                                } else {
                                    throw new IllegalArgumentException(s4.h.f("Unexpected number after 'z' (s=", d9.a.f7437g, ")"));
                                }
                                break;
                        }
                        boolean isUpperCase = Character.isUpperCase(c6);
                        switch (c6) {
                            case 'A':
                                d9.a.d(d9.a.I(), d9.a.I(), d9.a.I(), d9.a.H(), d9.a.H(), d9.a.I(), d9.a.I());
                                break;
                            case 'C':
                                float I = d9.a.I();
                                float I2 = d9.a.I();
                                float I3 = d9.a.I();
                                float I4 = d9.a.I();
                                float I5 = d9.a.I();
                                float I6 = d9.a.I();
                                d9.a.f7440l = I3;
                                d9.a.f7441m = I4;
                                d9.a.j(I, I2, I3, I4, I5, I6);
                                break;
                            case 'H':
                                d9.a.C(d9.a.I(), d9.a.k);
                                break;
                            case 'L':
                                d9.a.C(d9.a.I(), d9.a.I());
                                break;
                            case 'M':
                                d9.a.F(d9.a.I(), d9.a.I());
                                break;
                            case 'Q':
                                d9.a.J(d9.a.I(), d9.a.I(), d9.a.I(), d9.a.I());
                                break;
                            case 'S':
                                float I7 = d9.a.I();
                                float I8 = d9.a.I();
                                float I9 = d9.a.I();
                                float I10 = d9.a.I();
                                float f2 = (d9.a.j * 2.0f) - d9.a.f7440l;
                                float f10 = (d9.a.k * 2.0f) - d9.a.f7441m;
                                d9.a.f7440l = I7;
                                d9.a.f7441m = I8;
                                d9.a.j(f2, f10, I7, I8, I9, I10);
                                break;
                            case 'T':
                                d9.a.J((d9.a.j * 2.0f) - d9.a.f7440l, (d9.a.k * 2.0f) - d9.a.f7441m, d9.a.I(), d9.a.I());
                                break;
                            case com.swmansion.reanimated.BuildConfig.REACT_NATIVE_MINOR_VERSION /* 86 */:
                                d9.a.C(d9.a.j, d9.a.I());
                                break;
                            case 'Z':
                            case 'z':
                                if (d9.a.f7444p) {
                                    d9.a.j = d9.a.f7442n;
                                    d9.a.k = d9.a.f7443o;
                                    d9.a.f7444p = false;
                                    d9.a.f7438h.close();
                                    d9.a.f7439i.add(new h0(5, new k0[]{new k0(d9.a.j, d9.a.k)}));
                                    break;
                                }
                                break;
                            case 'a':
                                d9.a.d(d9.a.I(), d9.a.I(), d9.a.I(), d9.a.H(), d9.a.H(), d9.a.I() + d9.a.j, d9.a.I() + d9.a.k);
                                break;
                            case 'c':
                                float I11 = d9.a.I();
                                float I12 = d9.a.I();
                                float I13 = d9.a.I();
                                float I14 = d9.a.I();
                                float I15 = d9.a.I();
                                float I16 = d9.a.I();
                                float f11 = d9.a.j;
                                float f12 = I11 + f11;
                                float f13 = d9.a.k;
                                float f14 = I13 + f11;
                                float f15 = I14 + f13;
                                d9.a.f7440l = f14;
                                d9.a.f7441m = f15;
                                d9.a.j(f12, I12 + f13, f14, f15, I15 + f11, I16 + f13);
                                break;
                            case 'h':
                                d9.a.C(d9.a.I() + d9.a.j, d9.a.k + 0.0f);
                                break;
                            case 'l':
                                d9.a.C(d9.a.I() + d9.a.j, d9.a.I() + d9.a.k);
                                break;
                            case 'm':
                                d9.a.F(d9.a.I() + d9.a.j, d9.a.I() + d9.a.k);
                                break;
                            case 'q':
                                float I17 = d9.a.I();
                                float I18 = d9.a.I();
                                float I19 = d9.a.I();
                                float I20 = d9.a.I();
                                float f16 = d9.a.j;
                                float f17 = d9.a.k;
                                d9.a.J(I17 + f16, I18 + f17, I19 + f16, I20 + f17);
                                break;
                            case 's':
                                float I21 = d9.a.I();
                                float I22 = d9.a.I();
                                float I23 = d9.a.I();
                                float I24 = d9.a.I();
                                float f18 = d9.a.j;
                                float f19 = I21 + f18;
                                float f20 = d9.a.k;
                                float f21 = I22 + f20;
                                float f22 = (f18 * 2.0f) - d9.a.f7440l;
                                float f23 = (f20 * 2.0f) - d9.a.f7441m;
                                d9.a.f7440l = f19;
                                d9.a.f7441m = f21;
                                d9.a.j(f22, f23, f19, f21, I23 + f18, I24 + f20);
                                break;
                            case 't':
                                float I25 = d9.a.I();
                                float I26 = d9.a.I();
                                float f24 = d9.a.j;
                                float f25 = d9.a.k;
                                d9.a.J((f24 * 2.0f) - d9.a.f7440l, (f25 * 2.0f) - d9.a.f7441m, I25 + f24, I26 + f25);
                                break;
                            case 'v':
                                d9.a.C(d9.a.j + 0.0f, d9.a.I() + d9.a.k);
                                break;
                            default:
                                throw new IllegalArgumentException(String.format("Unexpected comand '%c' (s=%s)", Character.valueOf(c6), d9.a.f7437g));
                        }
                        if (z5) {
                            c6 = isUpperCase ? 'M' : 'm';
                        }
                    }
                }
                path = d9.a.f7438h;
            }
            i0Var.f6369d = path;
            ArrayList<h0> arrayList = d9.a.f7439i;
            i0Var.elements = arrayList;
            Iterator<h0> it = arrayList.iterator();
            while (it.hasNext()) {
                for (k0 k0Var : it.next().f6365b) {
                    double d6 = k0Var.a;
                    double d7 = i0Var.mScale;
                    k0Var.a = d6 * d7;
                    k0Var.f6381b *= d7;
                }
            }
            i0Var.invalidate();
        }
    }

    public static class PatternManager extends GroupViewManagerAbstract<j0> implements RNSVGPatternManagerInterface<j0> {
        public static final String REACT_CLASS = "RNSVGPattern";

        public PatternManager() {
            super(VirtualViewManager.SVGClass.RNSVGPattern);
            ((VirtualViewManager) this).mDelegate = new RNSVGPatternManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "align")
        public void setAlign(j0 j0Var, String str) {
            j0Var.M = str;
            j0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(j0 j0Var, String str) {
            super.setClipPath((PatternManager) j0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(j0 j0Var, int i5) {
            super.setClipRule((PatternManager) j0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(j0 j0Var, Integer num) {
            super.setColor((PatternManager) j0Var, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(j0 j0Var, String str) {
            super.setDisplay((PatternManager) j0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(j0 j0Var, Dynamic dynamic) {
            super.setFill((PatternManager) j0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(j0 j0Var, float f2) {
            super.setFillOpacity((PatternManager) j0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(j0 j0Var, int i5) {
            super.setFillRule((PatternManager) j0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(j0 j0Var, String str) {
            super.setFilter((PatternManager) j0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "font")
        public /* bridge */ /* synthetic */ void setFont(j0 j0Var, Dynamic dynamic) {
            super.setFont((PatternManager) j0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = ViewProps.FONT_SIZE)
        public /* bridge */ /* synthetic */ void setFontSize(j0 j0Var, Dynamic dynamic) {
            super.setFontSize((PatternManager) j0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = ViewProps.FONT_WEIGHT)
        public /* bridge */ /* synthetic */ void setFontWeight(j0 j0Var, Dynamic dynamic) {
            super.setFontWeight((PatternManager) j0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(j0 j0Var, String str) {
            super.setMarkerEnd((PatternManager) j0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(j0 j0Var, String str) {
            super.setMarkerMid((PatternManager) j0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(j0 j0Var, String str) {
            super.setMarkerStart((PatternManager) j0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(j0 j0Var, String str) {
            super.setMask((PatternManager) j0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(j0 j0Var, ReadableArray readableArray) {
            super.setMatrix((PatternManager) j0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "meetOrSlice")
        public void setMeetOrSlice(j0 j0Var, int i5) {
            j0Var.N = i5;
            j0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "minX")
        public void setMinX(j0 j0Var, float f2) {
            j0Var.I = f2;
            j0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "minY")
        public void setMinY(j0 j0Var, float f2) {
            j0Var.J = f2;
            j0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(j0 j0Var, String str) {
            super.setName((PatternManager) j0Var, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((PatternManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "patternContentUnits")
        public void setPatternContentUnits(j0 j0Var, int i5) {
            if (i5 == 0) {
                j0Var.H = 1;
            } else if (i5 == 1) {
                j0Var.H = 2;
            }
            j0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "patternTransform")
        public void setPatternTransform(j0 j0Var, ReadableArray readableArray) {
            if (readableArray != null) {
                float[] fArr = j0.P;
                int N = e4.f.N(readableArray, fArr, j0Var.mScale);
                if (N == 6) {
                    if (j0Var.O == null) {
                        j0Var.O = new Matrix();
                    }
                    j0Var.O.setValues(fArr);
                } else if (N != -1) {
                    p8.a.v(ReactConstants.TAG, "RNSVG: Transform matrices must be of size 6");
                }
            } else {
                j0Var.O = null;
            }
            j0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "patternUnits")
        public void setPatternUnits(j0 j0Var, int i5) {
            if (i5 == 0) {
                j0Var.G = 1;
            } else if (i5 == 1) {
                j0Var.G = 2;
            }
            j0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(j0 j0Var, String str) {
            super.setPointerEvents((PatternManager) j0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(j0 j0Var, ReadableArray readableArray) {
            super.setPropList((PatternManager) j0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(j0 j0Var, boolean z5) {
            super.setResponsible((PatternManager) j0Var, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(j0 j0Var, Dynamic dynamic) {
            super.setStroke((PatternManager) j0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(j0 j0Var, Dynamic dynamic) {
            super.setStrokeDasharray((PatternManager) j0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(j0 j0Var, float f2) {
            super.setStrokeDashoffset((PatternManager) j0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(j0 j0Var, int i5) {
            super.setStrokeLinecap((PatternManager) j0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(j0 j0Var, int i5) {
            super.setStrokeLinejoin((PatternManager) j0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(j0 j0Var, float f2) {
            super.setStrokeMiterlimit((PatternManager) j0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(j0 j0Var, float f2) {
            super.setStrokeOpacity((PatternManager) j0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(j0 j0Var, Dynamic dynamic) {
            super.setStrokeWidth((PatternManager) j0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "vbHeight")
        public void setVbHeight(j0 j0Var, float f2) {
            j0Var.L = f2;
            j0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "vbWidth")
        public void setVbWidth(j0 j0Var, float f2) {
            j0Var.K = f2;
            j0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(j0 j0Var, int i5) {
            super.setVectorEffect((PatternManager) j0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "height")
        public void setHeight(j0 j0Var, Dynamic dynamic) {
            j0Var.getClass();
            j0Var.F = r0.b(dynamic);
            j0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "width")
        public void setWidth(j0 j0Var, Dynamic dynamic) {
            j0Var.getClass();
            j0Var.E = r0.b(dynamic);
            j0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "x")
        public void setX(j0 j0Var, Dynamic dynamic) {
            j0Var.getClass();
            j0Var.f6376x = r0.b(dynamic);
            j0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGPatternManagerInterface
        @ReactProp(name = "y")
        public void setY(j0 j0Var, Dynamic dynamic) {
            j0Var.getClass();
            j0Var.f6377y = r0.b(dynamic);
            j0Var.invalidate();
        }
    }

    public static class RadialGradientManager extends VirtualViewManager<n0> implements RNSVGRadialGradientManagerInterface<n0> {
        public static final String REACT_CLASS = "RNSVGRadialGradient";

        public RadialGradientManager() {
            super(VirtualViewManager.SVGClass.RNSVGRadialGradient);
            ((VirtualViewManager) this).mDelegate = new RNSVGRadialGradientManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(n0 n0Var, String str) {
            super.setClipPath((RadialGradientManager) n0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(n0 n0Var, int i5) {
            super.setClipRule((RadialGradientManager) n0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(n0 n0Var, String str) {
            super.setDisplay((RadialGradientManager) n0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "gradient")
        public void setGradient(n0 n0Var, ReadableArray readableArray) {
            n0Var.f6403y = readableArray;
            n0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "gradientTransform")
        public void setGradientTransform(n0 n0Var, ReadableArray readableArray) {
            if (readableArray != null) {
                float[] fArr = n0.G;
                int N = e4.f.N(readableArray, fArr, n0Var.mScale);
                if (N == 6) {
                    if (n0Var.F == null) {
                        n0Var.F = new Matrix();
                    }
                    n0Var.F.setValues(fArr);
                } else if (N != -1) {
                    p8.a.v(ReactConstants.TAG, "RNSVG: Transform matrices must be of size 6");
                }
            } else {
                n0Var.F = null;
            }
            n0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "gradientUnits")
        public void setGradientUnits(n0 n0Var, int i5) {
            if (i5 == 0) {
                n0Var.E = 1;
            } else if (i5 == 1) {
                n0Var.E = 2;
            }
            n0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(n0 n0Var, String str) {
            super.setMarkerEnd((RadialGradientManager) n0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(n0 n0Var, String str) {
            super.setMarkerMid((RadialGradientManager) n0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(n0 n0Var, String str) {
            super.setMarkerStart((RadialGradientManager) n0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(n0 n0Var, String str) {
            super.setMask((RadialGradientManager) n0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(n0 n0Var, ReadableArray readableArray) {
            super.setMatrix((RadialGradientManager) n0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(n0 n0Var, String str) {
            super.setName((RadialGradientManager) n0Var, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((RadialGradientManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(n0 n0Var, String str) {
            super.setPointerEvents((RadialGradientManager) n0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(n0 n0Var, boolean z5) {
            super.setResponsible((RadialGradientManager) n0Var, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "cx")
        public void setCx(n0 n0Var, Dynamic dynamic) {
            n0Var.getClass();
            n0Var.f6401w = r0.b(dynamic);
            n0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "cy")
        public void setCy(n0 n0Var, Dynamic dynamic) {
            n0Var.getClass();
            n0Var.f6402x = r0.b(dynamic);
            n0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "fx")
        public void setFx(n0 n0Var, Dynamic dynamic) {
            n0Var.getClass();
            n0Var.f6397d = r0.b(dynamic);
            n0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "fy")
        public void setFy(n0 n0Var, Dynamic dynamic) {
            n0Var.getClass();
            n0Var.f6398e = r0.b(dynamic);
            n0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "rx")
        public void setRx(n0 n0Var, Dynamic dynamic) {
            n0Var.getClass();
            n0Var.f6399i = r0.b(dynamic);
            n0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface
        @ReactProp(name = "ry")
        public void setRy(n0 n0Var, Dynamic dynamic) {
            n0Var.getClass();
            n0Var.f6400v = r0.b(dynamic);
            n0Var.invalidate();
        }
    }

    public static class RectViewManager extends RenderableViewManager<o0> implements RNSVGRectManagerInterface<o0> {
        public static final String REACT_CLASS = "RNSVGRect";

        public RectViewManager() {
            super(VirtualViewManager.SVGClass.RNSVGRect);
            ((VirtualViewManager) this).mDelegate = new RNSVGRectManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(o0 o0Var, String str) {
            super.setClipPath((RectViewManager) o0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(o0 o0Var, int i5) {
            super.setClipRule((RectViewManager) o0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(o0 o0Var, Integer num) {
            super.setColor((RectViewManager) o0Var, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(o0 o0Var, String str) {
            super.setDisplay((RectViewManager) o0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(o0 o0Var, Dynamic dynamic) {
            super.setFill((RectViewManager) o0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(o0 o0Var, float f2) {
            super.setFillOpacity((RectViewManager) o0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(o0 o0Var, int i5) {
            super.setFillRule((RectViewManager) o0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(o0 o0Var, String str) {
            super.setFilter((RectViewManager) o0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(o0 o0Var, String str) {
            super.setMarkerEnd((RectViewManager) o0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(o0 o0Var, String str) {
            super.setMarkerMid((RectViewManager) o0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(o0 o0Var, String str) {
            super.setMarkerStart((RectViewManager) o0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(o0 o0Var, String str) {
            super.setMask((RectViewManager) o0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(o0 o0Var, ReadableArray readableArray) {
            super.setMatrix((RectViewManager) o0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(o0 o0Var, String str) {
            super.setName((RectViewManager) o0Var, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((RectViewManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(o0 o0Var, String str) {
            super.setPointerEvents((RectViewManager) o0Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(o0 o0Var, ReadableArray readableArray) {
            super.setPropList((RectViewManager) o0Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(o0 o0Var, boolean z5) {
            super.setResponsible((RectViewManager) o0Var, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(o0 o0Var, Dynamic dynamic) {
            super.setStroke((RectViewManager) o0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(o0 o0Var, Dynamic dynamic) {
            super.setStrokeDasharray((RectViewManager) o0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(o0 o0Var, float f2) {
            super.setStrokeDashoffset((RectViewManager) o0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(o0 o0Var, int i5) {
            super.setStrokeLinecap((RectViewManager) o0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(o0 o0Var, int i5) {
            super.setStrokeLinejoin((RectViewManager) o0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(o0 o0Var, float f2) {
            super.setStrokeMiterlimit((RectViewManager) o0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(o0 o0Var, float f2) {
            super.setStrokeOpacity((RectViewManager) o0Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(o0 o0Var, Dynamic dynamic) {
            super.setStrokeWidth((RectViewManager) o0Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(o0 o0Var, int i5) {
            super.setVectorEffect((RectViewManager) o0Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "height")
        public void setHeight(o0 o0Var, Dynamic dynamic) {
            o0Var.getClass();
            o0Var.f6409v = r0.b(dynamic);
            o0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "rx")
        public void setRx(o0 o0Var, Dynamic dynamic) {
            o0Var.getClass();
            o0Var.f6410w = r0.b(dynamic);
            o0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "ry")
        public void setRy(o0 o0Var, Dynamic dynamic) {
            o0Var.getClass();
            o0Var.f6411x = r0.b(dynamic);
            o0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "width")
        public void setWidth(o0 o0Var, Dynamic dynamic) {
            o0Var.getClass();
            o0Var.f6408i = r0.b(dynamic);
            o0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "x")
        public void setX(o0 o0Var, Dynamic dynamic) {
            o0Var.getClass();
            o0Var.f6406d = r0.b(dynamic);
            o0Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGRectManagerInterface
        @ReactProp(name = "y")
        public void setY(o0 o0Var, Dynamic dynamic) {
            o0Var.getClass();
            o0Var.f6407e = r0.b(dynamic);
            o0Var.invalidate();
        }
    }

    public static class SymbolManager extends GroupViewManagerAbstract<z1> implements RNSVGSymbolManagerInterface<z1> {
        public static final String REACT_CLASS = "RNSVGSymbol";

        public SymbolManager() {
            super(VirtualViewManager.SVGClass.RNSVGSymbol);
            ((VirtualViewManager) this).mDelegate = new RNSVGSymbolManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "align")
        public void setAlign(z1 z1Var, String str) {
            z1Var.G = str;
            z1Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(z1 z1Var, String str) {
            super.setClipPath((SymbolManager) z1Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(z1 z1Var, int i5) {
            super.setClipRule((SymbolManager) z1Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(z1 z1Var, Integer num) {
            super.setColor((SymbolManager) z1Var, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(z1 z1Var, String str) {
            super.setDisplay((SymbolManager) z1Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(z1 z1Var, Dynamic dynamic) {
            super.setFill((SymbolManager) z1Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(z1 z1Var, float f2) {
            super.setFillOpacity((SymbolManager) z1Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(z1 z1Var, int i5) {
            super.setFillRule((SymbolManager) z1Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(z1 z1Var, String str) {
            super.setFilter((SymbolManager) z1Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "font")
        public /* bridge */ /* synthetic */ void setFont(z1 z1Var, Dynamic dynamic) {
            super.setFont((SymbolManager) z1Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = ViewProps.FONT_SIZE)
        public /* bridge */ /* synthetic */ void setFontSize(z1 z1Var, Dynamic dynamic) {
            super.setFontSize((SymbolManager) z1Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = ViewProps.FONT_WEIGHT)
        public /* bridge */ /* synthetic */ void setFontWeight(z1 z1Var, Dynamic dynamic) {
            super.setFontWeight((SymbolManager) z1Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(z1 z1Var, String str) {
            super.setMarkerEnd((SymbolManager) z1Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(z1 z1Var, String str) {
            super.setMarkerMid((SymbolManager) z1Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(z1 z1Var, String str) {
            super.setMarkerStart((SymbolManager) z1Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(z1 z1Var, String str) {
            super.setMask((SymbolManager) z1Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(z1 z1Var, ReadableArray readableArray) {
            super.setMatrix((SymbolManager) z1Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "meetOrSlice")
        public void setMeetOrSlice(z1 z1Var, int i5) {
            z1Var.H = i5;
            z1Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "minX")
        public void setMinX(z1 z1Var, float f2) {
            z1Var.f6481x = f2;
            z1Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "minY")
        public void setMinY(z1 z1Var, float f2) {
            z1Var.f6482y = f2;
            z1Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(z1 z1Var, String str) {
            super.setName((SymbolManager) z1Var, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((SymbolManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(z1 z1Var, String str) {
            super.setPointerEvents((SymbolManager) z1Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(z1 z1Var, ReadableArray readableArray) {
            super.setPropList((SymbolManager) z1Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(z1 z1Var, boolean z5) {
            super.setResponsible((SymbolManager) z1Var, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(z1 z1Var, Dynamic dynamic) {
            super.setStroke((SymbolManager) z1Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(z1 z1Var, Dynamic dynamic) {
            super.setStrokeDasharray((SymbolManager) z1Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(z1 z1Var, float f2) {
            super.setStrokeDashoffset((SymbolManager) z1Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(z1 z1Var, int i5) {
            super.setStrokeLinecap((SymbolManager) z1Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(z1 z1Var, int i5) {
            super.setStrokeLinejoin((SymbolManager) z1Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(z1 z1Var, float f2) {
            super.setStrokeMiterlimit((SymbolManager) z1Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(z1 z1Var, float f2) {
            super.setStrokeOpacity((SymbolManager) z1Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(z1 z1Var, Dynamic dynamic) {
            super.setStrokeWidth((SymbolManager) z1Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "vbHeight")
        public void setVbHeight(z1 z1Var, float f2) {
            z1Var.F = f2;
            z1Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "vbWidth")
        public void setVbWidth(z1 z1Var, float f2) {
            z1Var.E = f2;
            z1Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGSymbolManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(z1 z1Var, int i5) {
            super.setVectorEffect((SymbolManager) z1Var, i5);
        }
    }

    public static class TextPathViewManager extends TextViewManagerAbstract<b2> implements RNSVGTextPathManagerInterface<b2> {
        public static final String REACT_CLASS = "RNSVGTextPath";

        public TextPathViewManager() {
            super(VirtualViewManager.SVGClass.RNSVGTextPath);
            ((VirtualViewManager) this).mDelegate = new RNSVGTextPathManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        public /* bridge */ /* synthetic */ void setAlignmentBaseline(b2 b2Var, String str) {
            super.setAlignmentBaseline((TextPathViewManager) b2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "baselineShift")
        public /* bridge */ /* synthetic */ void setBaselineShift(b2 b2Var, Dynamic dynamic) {
            super.setBaselineShift((TextPathViewManager) b2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(b2 b2Var, String str) {
            super.setClipPath((TextPathViewManager) b2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(b2 b2Var, int i5) {
            super.setClipRule((TextPathViewManager) b2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(b2 b2Var, Integer num) {
            super.setColor((TextPathViewManager) b2Var, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(b2 b2Var, String str) {
            super.setDisplay((TextPathViewManager) b2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "dx")
        public /* bridge */ /* synthetic */ void setDx(b2 b2Var, Dynamic dynamic) {
            super.setDx((TextPathViewManager) b2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "dy")
        public /* bridge */ /* synthetic */ void setDy(b2 b2Var, Dynamic dynamic) {
            super.setDy((TextPathViewManager) b2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(b2 b2Var, Dynamic dynamic) {
            super.setFill((TextPathViewManager) b2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(b2 b2Var, float f2) {
            super.setFillOpacity((TextPathViewManager) b2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(b2 b2Var, int i5) {
            super.setFillRule((TextPathViewManager) b2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(b2 b2Var, String str) {
            super.setFilter((TextPathViewManager) b2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "font")
        public /* bridge */ /* synthetic */ void setFont(b2 b2Var, Dynamic dynamic) {
            super.setFont((TextPathViewManager) b2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = ViewProps.FONT_SIZE)
        public /* bridge */ /* synthetic */ void setFontSize(b2 b2Var, Dynamic dynamic) {
            super.setFontSize((TextPathViewManager) b2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = ViewProps.FONT_WEIGHT)
        public /* bridge */ /* synthetic */ void setFontWeight(b2 b2Var, Dynamic dynamic) {
            super.setFontWeight((TextPathViewManager) b2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "href")
        public void setHref(b2 b2Var, String str) {
            b2Var.N = str;
            b2Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "inlineSize")
        public /* bridge */ /* synthetic */ void setInlineSize(b2 b2Var, Dynamic dynamic) {
            super.setInlineSize((TextPathViewManager) b2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "lengthAdjust")
        public /* bridge */ /* synthetic */ void setLengthAdjust(b2 b2Var, String str) {
            super.setLengthAdjust((TextPathViewManager) b2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(b2 b2Var, String str) {
            super.setMarkerEnd((TextPathViewManager) b2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(b2 b2Var, String str) {
            super.setMarkerMid((TextPathViewManager) b2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(b2 b2Var, String str) {
            super.setMarkerStart((TextPathViewManager) b2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(b2 b2Var, String str) {
            super.setMask((TextPathViewManager) b2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(b2 b2Var, ReadableArray readableArray) {
            super.setMatrix((TextPathViewManager) b2Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(b2 b2Var, String str) {
            super.setName((TextPathViewManager) b2Var, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((TextPathViewManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(b2 b2Var, String str) {
            super.setPointerEvents((TextPathViewManager) b2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(b2 b2Var, ReadableArray readableArray) {
            super.setPropList((TextPathViewManager) b2Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(b2 b2Var, boolean z5) {
            super.setResponsible((TextPathViewManager) b2Var, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "rotate")
        public /* bridge */ /* synthetic */ void setRotate(b2 b2Var, Dynamic dynamic) {
            super.setRotate((TextPathViewManager) b2Var, dynamic);
        }

        @ReactProp(name = "midLine")
        public void setSharp(b2 b2Var, String str) {
            b2Var.getClass();
            b2Var.P = com.discord.chat.bridge.botuikit.a.v(str);
            b2Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(b2 b2Var, Dynamic dynamic) {
            super.setStroke((TextPathViewManager) b2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(b2 b2Var, Dynamic dynamic) {
            super.setStrokeDasharray((TextPathViewManager) b2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(b2 b2Var, float f2) {
            super.setStrokeDashoffset((TextPathViewManager) b2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(b2 b2Var, int i5) {
            super.setStrokeLinecap((TextPathViewManager) b2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(b2 b2Var, int i5) {
            super.setStrokeLinejoin((TextPathViewManager) b2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(b2 b2Var, float f2) {
            super.setStrokeMiterlimit((TextPathViewManager) b2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(b2 b2Var, float f2) {
            super.setStrokeOpacity((TextPathViewManager) b2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(b2 b2Var, Dynamic dynamic) {
            super.setStrokeWidth((TextPathViewManager) b2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "textLength")
        public /* bridge */ /* synthetic */ void setTextLength(b2 b2Var, Dynamic dynamic) {
            super.setTextLength((TextPathViewManager) b2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(b2 b2Var, int i5) {
            super.setVectorEffect((TextPathViewManager) b2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "verticalAlign")
        public /* bridge */ /* synthetic */ void setVerticalAlign(b2 b2Var, Dynamic dynamic) {
            super.setVerticalAlign((TextPathViewManager) b2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "x")
        public /* bridge */ /* synthetic */ void setX(b2 b2Var, Dynamic dynamic) {
            super.setX((TextPathViewManager) b2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "y")
        public /* bridge */ /* synthetic */ void setY(b2 b2Var, Dynamic dynamic) {
            super.setY((TextPathViewManager) b2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        public void setMidLine(b2 b2Var, String str) {
            b2Var.getClass();
            b2Var.P = com.discord.chat.bridge.botuikit.a.v(str);
            b2Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "side")
        public void setSide(b2 b2Var, String str) {
            int i5;
            b2Var.getClass();
            if (str == null) {
                throw new NullPointerException("Name is null");
            }
            if (str.equals(ViewProps.LEFT)) {
                i5 = 1;
            } else {
                if (!str.equals(ViewProps.RIGHT)) {
                    throw new IllegalArgumentException("No enum constant com.horcrux.svg.TextProperties.TextPathSide.".concat(str));
                }
                i5 = 2;
            }
            b2Var.O = i5;
            b2Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "spacing")
        public void setSpacing(b2 b2Var, String str) {
            b2Var.getClass();
            if (str == null) {
                throw new NullPointerException("Name is null");
            }
            if (!str.equals("auto") && !str.equals("exact")) {
                throw new IllegalArgumentException("No enum constant com.horcrux.svg.TextProperties.TextPathSpacing.".concat(str));
            }
            b2Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextPathManagerInterface
        @ReactProp(name = "startOffset")
        public void setStartOffset(b2 b2Var, Dynamic dynamic) {
            b2Var.getClass();
            b2Var.Q = r0.b(dynamic);
            b2Var.invalidate();
        }

        public TextPathViewManager(VirtualViewManager.SVGClass sVGClass) {
            super(sVGClass);
            ((VirtualViewManager) this).mDelegate = new RNSVGTextPathManagerDelegate(this);
        }

        @Override // com.horcrux.svg.RenderableViewManager.TextViewManagerAbstract
        @ReactProp(name = "method")
        public void setMethod(b2 b2Var, String str) {
            b2Var.l(str);
        }
    }

    public static class TextViewManagerAbstract<K extends f2> extends GroupViewManagerAbstract<K> {
        public TextViewManagerAbstract(VirtualViewManager.SVGClass sVGClass) {
            super(sVGClass);
        }

        public void setAlignmentBaseline(K k, String str) {
            k.l(str);
        }

        @ReactProp(name = "baselineShift")
        public void setBaselineShift(K k, Dynamic dynamic) {
            k.getClass();
            k.E = r0.c(dynamic);
            k.invalidate();
        }

        @ReactProp(name = "dx")
        public void setDx(K k, Dynamic dynamic) {
            k.getClass();
            k.K = r0.a(dynamic);
            k.invalidate();
        }

        @ReactProp(name = "dy")
        public void setDy(K k, Dynamic dynamic) {
            k.getClass();
            k.L = r0.a(dynamic);
            k.invalidate();
        }

        @ReactProp(name = "inlineSize")
        public void setInlineSize(K k, Dynamic dynamic) {
            k.getClass();
            k.f6349x = r0.b(dynamic);
            k.invalidate();
        }

        @ReactProp(name = "lengthAdjust")
        public void setLengthAdjust(K k, String str) {
            int i5;
            k.getClass();
            if (str == null) {
                throw new NullPointerException("Name is null");
            }
            if (str.equals("spacing")) {
                i5 = 1;
            } else {
                if (!str.equals("spacingAndGlyphs")) {
                    throw new IllegalArgumentException("No enum constant com.horcrux.svg.TextProperties.TextLengthAdjust.".concat(str));
                }
                i5 = 2;
            }
            k.F = i5;
            k.invalidate();
        }

        @ReactProp(name = "alignmentBaseline")
        public void setMethod(K k, String str) {
            k.l(str);
        }

        @ReactProp(name = "rotate")
        public void setRotate(K k, Dynamic dynamic) {
            k.getClass();
            k.J = r0.a(dynamic);
            k.invalidate();
        }

        @ReactProp(name = "textLength")
        public void setTextLength(K k, Dynamic dynamic) {
            k.getClass();
            k.f6350y = r0.b(dynamic);
            k.invalidate();
        }

        @ReactProp(name = "verticalAlign")
        public void setVerticalAlign(K k, Dynamic dynamic) {
            k.getClass();
            String c6 = r0.c(dynamic);
            if (c6 != null) {
                String trim = c6.trim();
                int lastIndexOf = trim.lastIndexOf(32);
                try {
                    k.G = c2.a(trim.substring(lastIndexOf));
                } catch (IllegalArgumentException unused) {
                    k.G = c2.baseline;
                }
                try {
                    k.E = trim.substring(0, lastIndexOf);
                } catch (IndexOutOfBoundsException unused2) {
                    k.E = null;
                }
            } else {
                k.G = c2.baseline;
                k.E = null;
            }
            k.invalidate();
        }

        @ReactProp(name = "x")
        public void setX(K k, Dynamic dynamic) {
            k.getClass();
            k.H = r0.a(dynamic);
            k.invalidate();
        }

        @ReactProp(name = "y")
        public void setY(K k, Dynamic dynamic) {
            k.getClass();
            k.I = r0.a(dynamic);
            k.invalidate();
        }

        @Override // com.horcrux.svg.RenderableViewManager.GroupViewManagerAbstract
        @ReactProp(name = "font")
        public void setFont(K k, Dynamic dynamic) {
            k.getClass();
            if (dynamic.getType() == ReadableType.Map) {
                k.f6304d = dynamic.asMap();
            } else {
                k.f6304d = null;
            }
            k.invalidate();
        }
    }

    public static class UseViewManager extends RenderableViewManager<g2> implements RNSVGUseManagerInterface<g2> {
        public static final String REACT_CLASS = "RNSVGUse";

        public UseViewManager() {
            super(VirtualViewManager.SVGClass.RNSVGUse);
            ((VirtualViewManager) this).mDelegate = new RNSVGUseManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(g2 g2Var, String str) {
            super.setClipPath((UseViewManager) g2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(g2 g2Var, int i5) {
            super.setClipRule((UseViewManager) g2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(g2 g2Var, Integer num) {
            super.setColor((UseViewManager) g2Var, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(g2 g2Var, String str) {
            super.setDisplay((UseViewManager) g2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(g2 g2Var, Dynamic dynamic) {
            super.setFill((UseViewManager) g2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(g2 g2Var, float f2) {
            super.setFillOpacity((UseViewManager) g2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(g2 g2Var, int i5) {
            super.setFillRule((UseViewManager) g2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(g2 g2Var, String str) {
            super.setFilter((UseViewManager) g2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "href")
        public void setHref(g2 g2Var, String str) {
            g2Var.f6357d = str;
            g2Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(g2 g2Var, String str) {
            super.setMarkerEnd((UseViewManager) g2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(g2 g2Var, String str) {
            super.setMarkerMid((UseViewManager) g2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(g2 g2Var, String str) {
            super.setMarkerStart((UseViewManager) g2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(g2 g2Var, String str) {
            super.setMask((UseViewManager) g2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(g2 g2Var, ReadableArray readableArray) {
            super.setMatrix((UseViewManager) g2Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(g2 g2Var, String str) {
            super.setName((UseViewManager) g2Var, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((UseViewManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(g2 g2Var, String str) {
            super.setPointerEvents((UseViewManager) g2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(g2 g2Var, ReadableArray readableArray) {
            super.setPropList((UseViewManager) g2Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(g2 g2Var, boolean z5) {
            super.setResponsible((UseViewManager) g2Var, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(g2 g2Var, Dynamic dynamic) {
            super.setStroke((UseViewManager) g2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(g2 g2Var, Dynamic dynamic) {
            super.setStrokeDasharray((UseViewManager) g2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(g2 g2Var, float f2) {
            super.setStrokeDashoffset((UseViewManager) g2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(g2 g2Var, int i5) {
            super.setStrokeLinecap((UseViewManager) g2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(g2 g2Var, int i5) {
            super.setStrokeLinejoin((UseViewManager) g2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(g2 g2Var, float f2) {
            super.setStrokeMiterlimit((UseViewManager) g2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(g2 g2Var, float f2) {
            super.setStrokeOpacity((UseViewManager) g2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(g2 g2Var, Dynamic dynamic) {
            super.setStrokeWidth((UseViewManager) g2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(g2 g2Var, int i5) {
            super.setVectorEffect((UseViewManager) g2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "height")
        public void setHeight(g2 g2Var, Dynamic dynamic) {
            g2Var.getClass();
            g2Var.f6361w = r0.b(dynamic);
            g2Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "width")
        public void setWidth(g2 g2Var, Dynamic dynamic) {
            g2Var.getClass();
            g2Var.f6360v = r0.b(dynamic);
            g2Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "x")
        public void setX(g2 g2Var, Dynamic dynamic) {
            g2Var.getClass();
            g2Var.f6358e = r0.b(dynamic);
            g2Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGUseManagerInterface
        @ReactProp(name = "y")
        public void setY(g2 g2Var, Dynamic dynamic) {
            g2Var.getClass();
            g2Var.f6359i = r0.b(dynamic);
            g2Var.invalidate();
        }
    }

    public RenderableViewManager(VirtualViewManager.SVGClass sVGClass) {
        super(sVGClass);
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public Map<String, Object> getExportedCustomDirectEventTypeConstants() {
        HashMap hashMap = new HashMap();
        hashMap.put(SvgOnLayoutEvent.EVENT_NAME, MapBuilder.of("registrationName", "onSvgLayout"));
        return hashMap;
    }

    @ReactProp(customType = "Color", name = ViewProps.COLOR)
    public void setColor(T t5, Integer num) {
        t5.setCurrentColor(num);
    }

    @ReactProp(name = "fill")
    public void setFill(T t5, Dynamic dynamic) {
        t5.setFill(dynamic);
    }

    @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
    public void setFillOpacity(T t5, float f2) {
        t5.setFillOpacity(f2);
    }

    @ReactProp(defaultInt = 1, name = "fillRule")
    public void setFillRule(T t5, int i5) {
        t5.setFillRule(i5);
    }

    @ReactProp(name = ViewProps.FILTER)
    public void setFilter(T t5, String str) {
        t5.setFilter(str);
    }

    @ReactProp(name = "propList")
    public void setPropList(T t5, ReadableArray readableArray) {
        t5.setPropList(readableArray);
    }

    @ReactProp(name = "stroke")
    public void setStroke(T t5, Dynamic dynamic) {
        t5.setStroke(dynamic);
    }

    @ReactProp(name = "strokeDasharray")
    public void setStrokeDasharray(T t5, Dynamic dynamic) {
        t5.setStrokeDasharray(dynamic);
    }

    @ReactProp(name = "strokeDashoffset")
    public void setStrokeDashoffset(T t5, float f2) {
        t5.setStrokeDashoffset(f2);
    }

    @ReactProp(defaultInt = 1, name = "strokeLinecap")
    public void setStrokeLinecap(T t5, int i5) {
        t5.setStrokeLinecap(i5);
    }

    @ReactProp(defaultInt = 1, name = "strokeLinejoin")
    public void setStrokeLinejoin(T t5, int i5) {
        t5.setStrokeLinejoin(i5);
    }

    @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
    public void setStrokeMiterlimit(T t5, float f2) {
        t5.setStrokeMiterlimit(f2);
    }

    @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
    public void setStrokeOpacity(T t5, float f2) {
        t5.setStrokeOpacity(f2);
    }

    @ReactProp(name = "strokeWidth")
    public void setStrokeWidth(T t5, Dynamic dynamic) {
        t5.setStrokeWidth(dynamic);
    }

    @ReactProp(name = "vectorEffect")
    public void setVectorEffect(T t5, int i5) {
        t5.setVectorEffect(i5);
    }

    public static class TSpanViewManager extends TextViewManagerAbstract<a2> implements RNSVGTSpanManagerInterface<a2> {
        public static final String REACT_CLASS = "RNSVGTSpan";

        public TSpanViewManager() {
            super(VirtualViewManager.SVGClass.RNSVGTSpan);
            ((VirtualViewManager) this).mDelegate = new RNSVGTSpanManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        public /* bridge */ /* synthetic */ void setAlignmentBaseline(a2 a2Var, String str) {
            super.setAlignmentBaseline((TSpanViewManager) a2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "baselineShift")
        public /* bridge */ /* synthetic */ void setBaselineShift(a2 a2Var, Dynamic dynamic) {
            super.setBaselineShift((TSpanViewManager) a2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(a2 a2Var, String str) {
            super.setClipPath((TSpanViewManager) a2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(a2 a2Var, int i5) {
            super.setClipRule((TSpanViewManager) a2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(a2 a2Var, Integer num) {
            super.setColor((TSpanViewManager) a2Var, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "content")
        public void setContent(a2 a2Var, String str) {
            a2Var.O = str;
            a2Var.invalidate();
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(a2 a2Var, String str) {
            super.setDisplay((TSpanViewManager) a2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "dx")
        public /* bridge */ /* synthetic */ void setDx(a2 a2Var, Dynamic dynamic) {
            super.setDx((TSpanViewManager) a2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "dy")
        public /* bridge */ /* synthetic */ void setDy(a2 a2Var, Dynamic dynamic) {
            super.setDy((TSpanViewManager) a2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(a2 a2Var, Dynamic dynamic) {
            super.setFill((TSpanViewManager) a2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(a2 a2Var, float f2) {
            super.setFillOpacity((TSpanViewManager) a2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(a2 a2Var, int i5) {
            super.setFillRule((TSpanViewManager) a2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(a2 a2Var, String str) {
            super.setFilter((TSpanViewManager) a2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "font")
        public /* bridge */ /* synthetic */ void setFont(a2 a2Var, Dynamic dynamic) {
            super.setFont((TSpanViewManager) a2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = ViewProps.FONT_SIZE)
        public /* bridge */ /* synthetic */ void setFontSize(a2 a2Var, Dynamic dynamic) {
            super.setFontSize((TSpanViewManager) a2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = ViewProps.FONT_WEIGHT)
        public /* bridge */ /* synthetic */ void setFontWeight(a2 a2Var, Dynamic dynamic) {
            super.setFontWeight((TSpanViewManager) a2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "inlineSize")
        public /* bridge */ /* synthetic */ void setInlineSize(a2 a2Var, Dynamic dynamic) {
            super.setInlineSize((TSpanViewManager) a2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "lengthAdjust")
        public /* bridge */ /* synthetic */ void setLengthAdjust(a2 a2Var, String str) {
            super.setLengthAdjust((TSpanViewManager) a2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(a2 a2Var, String str) {
            super.setMarkerEnd((TSpanViewManager) a2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(a2 a2Var, String str) {
            super.setMarkerMid((TSpanViewManager) a2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(a2 a2Var, String str) {
            super.setMarkerStart((TSpanViewManager) a2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(a2 a2Var, String str) {
            super.setMask((TSpanViewManager) a2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(a2 a2Var, ReadableArray readableArray) {
            super.setMatrix((TSpanViewManager) a2Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(a2 a2Var, String str) {
            super.setName((TSpanViewManager) a2Var, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((TSpanViewManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(a2 a2Var, String str) {
            super.setPointerEvents((TSpanViewManager) a2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(a2 a2Var, ReadableArray readableArray) {
            super.setPropList((TSpanViewManager) a2Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(a2 a2Var, boolean z5) {
            super.setResponsible((TSpanViewManager) a2Var, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "rotate")
        public /* bridge */ /* synthetic */ void setRotate(a2 a2Var, Dynamic dynamic) {
            super.setRotate((TSpanViewManager) a2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(a2 a2Var, Dynamic dynamic) {
            super.setStroke((TSpanViewManager) a2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(a2 a2Var, Dynamic dynamic) {
            super.setStrokeDasharray((TSpanViewManager) a2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(a2 a2Var, float f2) {
            super.setStrokeDashoffset((TSpanViewManager) a2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(a2 a2Var, int i5) {
            super.setStrokeLinecap((TSpanViewManager) a2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(a2 a2Var, int i5) {
            super.setStrokeLinejoin((TSpanViewManager) a2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(a2 a2Var, float f2) {
            super.setStrokeMiterlimit((TSpanViewManager) a2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(a2 a2Var, float f2) {
            super.setStrokeOpacity((TSpanViewManager) a2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(a2 a2Var, Dynamic dynamic) {
            super.setStrokeWidth((TSpanViewManager) a2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "textLength")
        public /* bridge */ /* synthetic */ void setTextLength(a2 a2Var, Dynamic dynamic) {
            super.setTextLength((TSpanViewManager) a2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(a2 a2Var, int i5) {
            super.setVectorEffect((TSpanViewManager) a2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "verticalAlign")
        public /* bridge */ /* synthetic */ void setVerticalAlign(a2 a2Var, Dynamic dynamic) {
            super.setVerticalAlign((TSpanViewManager) a2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "x")
        public /* bridge */ /* synthetic */ void setX(a2 a2Var, Dynamic dynamic) {
            super.setX((TSpanViewManager) a2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTSpanManagerInterface
        @ReactProp(name = "y")
        public /* bridge */ /* synthetic */ void setY(a2 a2Var, Dynamic dynamic) {
            super.setY((TSpanViewManager) a2Var, dynamic);
        }

        public TSpanViewManager(VirtualViewManager.SVGClass sVGClass) {
            super(sVGClass);
            ((VirtualViewManager) this).mDelegate = new RNSVGTSpanManagerDelegate(this);
        }
    }

    public static class TextViewManager extends TextViewManagerAbstract<f2> implements RNSVGTextManagerInterface<f2> {
        public static final String REACT_CLASS = "RNSVGText";

        public TextViewManager() {
            super(VirtualViewManager.SVGClass.RNSVGText);
            ((VirtualViewManager) this).mDelegate = new RNSVGTextManagerDelegate(this);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        public /* bridge */ /* synthetic */ void setAlignmentBaseline(f2 f2Var, String str) {
            super.setAlignmentBaseline((TextViewManager) f2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "baselineShift")
        public /* bridge */ /* synthetic */ void setBaselineShift(f2 f2Var, Dynamic dynamic) {
            super.setBaselineShift((TextViewManager) f2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "clipPath")
        public /* bridge */ /* synthetic */ void setClipPath(f2 f2Var, String str) {
            super.setClipPath((TextViewManager) f2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "clipRule")
        public /* bridge */ /* synthetic */ void setClipRule(f2 f2Var, int i5) {
            super.setClipRule((TextViewManager) f2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(customType = "Color", name = ViewProps.COLOR)
        public /* bridge */ /* synthetic */ void setColor(f2 f2Var, Integer num) {
            super.setColor((TextViewManager) f2Var, num);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = ViewProps.DISPLAY)
        public /* bridge */ /* synthetic */ void setDisplay(f2 f2Var, String str) {
            super.setDisplay((TextViewManager) f2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "dx")
        public /* bridge */ /* synthetic */ void setDx(f2 f2Var, Dynamic dynamic) {
            super.setDx((TextViewManager) f2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "dy")
        public /* bridge */ /* synthetic */ void setDy(f2 f2Var, Dynamic dynamic) {
            super.setDy((TextViewManager) f2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "fill")
        public /* bridge */ /* synthetic */ void setFill(f2 f2Var, Dynamic dynamic) {
            super.setFill((TextViewManager) f2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "fillOpacity")
        public /* bridge */ /* synthetic */ void setFillOpacity(f2 f2Var, float f2) {
            super.setFillOpacity((TextViewManager) f2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(defaultInt = 1, name = "fillRule")
        public /* bridge */ /* synthetic */ void setFillRule(f2 f2Var, int i5) {
            super.setFillRule((TextViewManager) f2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = ViewProps.FILTER)
        public /* bridge */ /* synthetic */ void setFilter(f2 f2Var, String str) {
            super.setFilter((TextViewManager) f2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "font")
        public /* bridge */ /* synthetic */ void setFont(f2 f2Var, Dynamic dynamic) {
            super.setFont((TextViewManager) f2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = ViewProps.FONT_SIZE)
        public /* bridge */ /* synthetic */ void setFontSize(f2 f2Var, Dynamic dynamic) {
            super.setFontSize((TextViewManager) f2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = ViewProps.FONT_WEIGHT)
        public /* bridge */ /* synthetic */ void setFontWeight(f2 f2Var, Dynamic dynamic) {
            super.setFontWeight((TextViewManager) f2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "inlineSize")
        public /* bridge */ /* synthetic */ void setInlineSize(f2 f2Var, Dynamic dynamic) {
            super.setInlineSize((TextViewManager) f2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "lengthAdjust")
        public /* bridge */ /* synthetic */ void setLengthAdjust(f2 f2Var, String str) {
            super.setLengthAdjust((TextViewManager) f2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "markerEnd")
        public /* bridge */ /* synthetic */ void setMarkerEnd(f2 f2Var, String str) {
            super.setMarkerEnd((TextViewManager) f2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "markerMid")
        public /* bridge */ /* synthetic */ void setMarkerMid(f2 f2Var, String str) {
            super.setMarkerMid((TextViewManager) f2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "markerStart")
        public /* bridge */ /* synthetic */ void setMarkerStart(f2 f2Var, String str) {
            super.setMarkerStart((TextViewManager) f2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "mask")
        public /* bridge */ /* synthetic */ void setMask(f2 f2Var, String str) {
            super.setMask((TextViewManager) f2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        public /* bridge */ /* synthetic */ void setMatrix(f2 f2Var, ReadableArray readableArray) {
            super.setMatrix((TextViewManager) f2Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = StackTraceHelper.NAME_KEY)
        public /* bridge */ /* synthetic */ void setName(f2 f2Var, String str) {
            super.setName((TextViewManager) f2Var, str);
        }

        @Override // com.facebook.react.uimanager.BaseViewManager
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = ViewProps.OPACITY)
        public /* bridge */ /* synthetic */ void setOpacity(View view, float f2) {
            super.setOpacity((TextViewManager) view, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = ViewProps.POINTER_EVENTS)
        public /* bridge */ /* synthetic */ void setPointerEvents(f2 f2Var, String str) {
            super.setPointerEvents((TextViewManager) f2Var, str);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "propList")
        public /* bridge */ /* synthetic */ void setPropList(f2 f2Var, ReadableArray readableArray) {
            super.setPropList((TextViewManager) f2Var, readableArray);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "responsible")
        public /* bridge */ /* synthetic */ void setResponsible(f2 f2Var, boolean z5) {
            super.setResponsible((TextViewManager) f2Var, z5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "rotate")
        public /* bridge */ /* synthetic */ void setRotate(f2 f2Var, Dynamic dynamic) {
            super.setRotate((TextViewManager) f2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "stroke")
        public /* bridge */ /* synthetic */ void setStroke(f2 f2Var, Dynamic dynamic) {
            super.setStroke((TextViewManager) f2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "strokeDasharray")
        public /* bridge */ /* synthetic */ void setStrokeDasharray(f2 f2Var, Dynamic dynamic) {
            super.setStrokeDasharray((TextViewManager) f2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "strokeDashoffset")
        public /* bridge */ /* synthetic */ void setStrokeDashoffset(f2 f2Var, float f2) {
            super.setStrokeDashoffset((TextViewManager) f2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinecap")
        public /* bridge */ /* synthetic */ void setStrokeLinecap(f2 f2Var, int i5) {
            super.setStrokeLinecap((TextViewManager) f2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(defaultInt = 1, name = "strokeLinejoin")
        public /* bridge */ /* synthetic */ void setStrokeLinejoin(f2 f2Var, int i5) {
            super.setStrokeLinejoin((TextViewManager) f2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(defaultFloat = BulletSpan.STANDARD_STROKE_WIDTH_PX, name = "strokeMiterlimit")
        public /* bridge */ /* synthetic */ void setStrokeMiterlimit(f2 f2Var, float f2) {
            super.setStrokeMiterlimit((TextViewManager) f2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = "strokeOpacity")
        public /* bridge */ /* synthetic */ void setStrokeOpacity(f2 f2Var, float f2) {
            super.setStrokeOpacity((TextViewManager) f2Var, f2);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "strokeWidth")
        public /* bridge */ /* synthetic */ void setStrokeWidth(f2 f2Var, Dynamic dynamic) {
            super.setStrokeWidth((TextViewManager) f2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "textLength")
        public /* bridge */ /* synthetic */ void setTextLength(f2 f2Var, Dynamic dynamic) {
            super.setTextLength((TextViewManager) f2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "vectorEffect")
        public /* bridge */ /* synthetic */ void setVectorEffect(f2 f2Var, int i5) {
            super.setVectorEffect((TextViewManager) f2Var, i5);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "verticalAlign")
        public /* bridge */ /* synthetic */ void setVerticalAlign(f2 f2Var, Dynamic dynamic) {
            super.setVerticalAlign((TextViewManager) f2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "x")
        public /* bridge */ /* synthetic */ void setX(f2 f2Var, Dynamic dynamic) {
            super.setX((TextViewManager) f2Var, dynamic);
        }

        @Override // com.facebook.react.viewmanagers.RNSVGTextManagerInterface
        @ReactProp(name = "y")
        public /* bridge */ /* synthetic */ void setY(f2 f2Var, Dynamic dynamic) {
            super.setY((TextViewManager) f2Var, dynamic);
        }

        public TextViewManager(VirtualViewManager.SVGClass sVGClass) {
            super(sVGClass);
            ((VirtualViewManager) this).mDelegate = new RNSVGTextManagerDelegate(this);
        }
    }

    public void setFill(T t5, ReadableMap readableMap) {
        t5.setFill(readableMap);
    }

    public void setStroke(T t5, ReadableMap readableMap) {
        t5.setStroke(readableMap);
    }
}
